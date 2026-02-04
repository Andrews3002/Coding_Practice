SELECT 
    A.employee_id,
    A.name,
    COUNT(*) AS reports_count,
    ROUND(AVG(B.age::numeric), 0) AS average_age
FROM Employees A
INNER JOIN Employees B
ON A.employee_id = B.reports_to
GROUP BY A.employee_id, A.name
ORDER BY A.employee_id ASC