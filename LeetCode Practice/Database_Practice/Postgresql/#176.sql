SELECT
    CASE
        WHEN A.rn != 2 THEN NULL
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