SELECT
    A.name AS "name"
FROM Employee A
JOIN (
    SELECT
        managerId
    FROM Employee
    GROUP BY managerId
    HAVING COUNT(*) >= 5
) AS B
ON A.id = B.managerId