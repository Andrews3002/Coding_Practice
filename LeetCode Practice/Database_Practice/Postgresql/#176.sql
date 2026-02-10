SELECT
    A.salary AS SecondHighestSalary
FROM Employee A
LEFT JOIN (
    SELECT
        salary,
        ROW_NUMBER() OVER(ORDER BY salary DESC) AS rn
    FROM Employee
    GROUP BY salary
) AS B
ON A.salary = B.salary
WHERE B.rn = 2