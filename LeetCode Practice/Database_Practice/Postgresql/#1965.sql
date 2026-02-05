SELECT C.empid 
FROM (
    SELECT 
        A.employee_id AS empid
    FROM Employees A
    LEFT JOIN Salaries B
    ON A.employee_id = B.employee_id
    WHERE B.salary IS NULL

    UNION ALL

    SELECT 
        A.employee_id AS empid
    FROM Salaries A
    LEFT JOIN Employees B
    ON A.employee_id = B.employee_id
    WHERE B.name IS NULL
) AS C
ORDER BY C.empid ASC