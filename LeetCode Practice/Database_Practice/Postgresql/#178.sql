SELECT
    A.score AS "score",
    B.rn AS "rank"
FROM Scores A
JOIN (
    SELECT score, ROW_NUMBER() OVER(ORDER BY score DESC) AS "rn"
    FROM Scores
    GROUP BY score
) B
ON A.score = B.score
ORDER BY A.score DESC