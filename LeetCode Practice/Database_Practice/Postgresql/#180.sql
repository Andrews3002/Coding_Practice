SELECT
    A.num AS "ConsecutiveNums"
FROM Logs A, Logs B, Logs C
WHERE 
    A.num = B.num
    AND
    B.num = C.num
    AND 
    A.id = B.id-1
    AND
    B.id = C.id-1