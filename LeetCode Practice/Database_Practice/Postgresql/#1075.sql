SELECT A.project_id, ROUND((SUM(B.experience_years)::numeric/COUNT(*)::numeric),2) AS average_years
FROM Project A
JOIN Employee B
ON A.employee_id = B.employee_id
GROUP BY (A.project_id)