SELECT
    COALESCE(A.salary, 'NULL') AS SecondHighestSalary
FROM (
    SELECT
        salary,
        ROW_NUMBER() OVER(ORDER BY salary DESC) AS rn
    FROM Employee
    GROUP BY salary
) AS A
WHERE A.rn = 2