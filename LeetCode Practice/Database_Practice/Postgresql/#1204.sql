WITH ordered AS (
    SELECT * FROM Queue
    ORDER BY turn ASC
),
RECURSIVE running_total AS (
    SELECT
        person_name,
        weight as "capacity",
        turn
    FROM ordered
    WHERE turn = 1

    UNION ALL

    SELECT
        A.person_name AS "person_name",
        A.weight + B.capacity AS "capacity",
        A.turn
    FROM ordered A
    JOIN running_total AS B
    ON A.turn = B.turn + 1
    WHERE A.weight + B.capacity <= 1000
),
last_entry AS (
    SELECT 
        MAX(turn) AS "last"
    FROM running_total
)
SELECT
    A.person_name AS "person_name"
FROM running_total A
JOIN last_entry B
ON A.turn = B.last