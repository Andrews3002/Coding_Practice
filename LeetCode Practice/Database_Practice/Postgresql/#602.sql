SELECT 
    B.id AS "id",
    B.num AS "num"
FROM (
    SELECT
        A.id AS "id",
        COUNT(*) AS "num"
    FROM (
        SELECT
            requester_id AS "id"
        FROM RequestAccepted

        UNION ALL

        SELECT
            accepter_id AS "id"
        FROM RequestAccepted
    ) AS A
    GROUP BY A.id
) AS B
WHERE B.num == MAX(B.num)