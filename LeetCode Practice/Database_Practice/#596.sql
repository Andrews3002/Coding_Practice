SELECT B.class FROM (
    SELECT A.class, COUNT(*)
    FROM Courses A
    GROUP BY A.class
) B
WHERE B.count >= 5;