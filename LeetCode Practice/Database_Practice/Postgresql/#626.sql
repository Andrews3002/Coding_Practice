SELECT
    PRESENT.id AS "id",
    CASE 
        WHEN COUNT(*)%2 == 0 THEN (
            WHEN PRESENT.id%2 = 0 THEN PAST.student
            ELSE FUTURE.student
        )
        WHEN FUTURE.student IS NULL THEN PRESENT.student
        WHEN PRESENT.id%2 = 0 THEN PAST.student
        ELSE FUTURE.student
    END AS "student"
FROM Seat PRESENT
LEFT JOIN Seat PAST 
ON PRESENT.id-1 = PAST.id
LEFT JOIN Seat FUTURE
ON PRESENT.id+1 = FUTURE.id