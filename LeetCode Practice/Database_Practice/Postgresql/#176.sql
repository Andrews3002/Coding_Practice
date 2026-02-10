SELECT
    CASE
        WHEN A.rn > 1 THEN MAX(salary)
        ELSE NULL
    END AS "SecondHighestSalary"
FROM (
    SELECT
        salary,
        ROW_NUMBER() OVER(ORDER BY salary DESC) AS rn
    FROM Employee
    GROUP BY salary
) AS A