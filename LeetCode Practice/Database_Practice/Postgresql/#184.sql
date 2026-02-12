SELECT 
    C.name AS "Department",
    A.name AS "Employee",
    A.salary AS "Salary"
FROM Employee A
JOIN (
    SELECT
        departmentId,
        MAX(salary) as "maxsalary"
    FROM Employee
    GROUP BY departmentId
) AS B
ON 
    A.salary = B.maxsalary 
    AND 
    A.departmentId = B.departmentId
JOIN Department C 
ON A.departmentId = C.id
