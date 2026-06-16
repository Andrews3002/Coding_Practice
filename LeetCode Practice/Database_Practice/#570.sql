SELECT
    A.name AS "name"
FROM Employee A
WHERE A.id IN (
    SELECT
        managerId
    FROM Employee
    GROUP BY managerId
    HAVING COUNT(*) >= 5
)