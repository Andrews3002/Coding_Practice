WITH running_total AS (
    SELECT
        person_name,
        SUM(weight) OVER (ORDER BY turn) AS "capacity",
        turn
    FROM Queue
),
filtered AS (
    SELECT * FROM running_total
    WHERE capacity <= 1000
),
last_entry AS (
    SELECT 
        MAX(turn) AS "last"
    FROM filtered
)
SELECT
    A.person_name AS "person_name"
FROM filtered A
JOIN last_entry B
ON A.turn = B.last