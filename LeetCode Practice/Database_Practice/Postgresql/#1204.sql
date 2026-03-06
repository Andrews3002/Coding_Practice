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
)
SELECT
    person_name
FROM filtered
WHERE turn = MAX(turn)