SELECT
    PRESENT.id AS "id",
    CASE 
        WHEN PRESENT.id%2 = 0 THEN PAST.student
        WHEN FUTURE.student IS NULL THEN PRESENT.student
        ELSE FUTURE.student
    END AS "student"
FROM Seat PRESENT
LEFT JOIN Seat PAST 
ON PRESENT.id-1 = PAST.id
LEFT JOIN Seat FUTURE
ON PRESENT.id+1 = FUTURE.id