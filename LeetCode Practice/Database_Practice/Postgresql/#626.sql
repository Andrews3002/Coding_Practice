SELECT
    CASE 
        WHEN FUTURE.student IS NULL THEN PRESENT.student
        WHEN PRESENT.id%2 = 0 THEN PAST.student
        ELSE FUTURE.student
    END AS "student"
FROM Seat PRESENT
JOIN Seat PAST 
ON PRESENT.id-1 = PAST.id
JOIN Seat FUTURE
ON PRESENT.id+1 = FUTURE.id