SELECT A.num
FROM (
    SELECT num, ROW_NUMBER() OVER(ORDER BY num DESC) rn FROM MyNumbers
    GROUP BY num
    HAVING COUNT(*) = 1
) A
WHERE A.rn = 1
