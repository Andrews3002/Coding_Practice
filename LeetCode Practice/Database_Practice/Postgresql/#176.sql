SELECT
    CASE
        WHEN MAX(A.rn = 1) THEN NULL
        ELSE A.salary
    END AS SecondHighestSalary
FROM (
    SELECT
        salary,
        ROW_NUMBER() OVER(ORDER BY salary DESC) AS rn
    FROM Employee
    GROUP BY salary
) AS A
WHERE A.rn = 2