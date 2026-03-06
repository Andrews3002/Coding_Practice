WITH running_total AS (
    SELECT
        person_name,
        SUM(weight) OVER (ORDER BY turn) AS "capacity"
        turn
    FROM Queue
    WHERE capacity <= 1000
)
SELECT
    person_name
FROM running_total
WHERE turn = MAX(turn)