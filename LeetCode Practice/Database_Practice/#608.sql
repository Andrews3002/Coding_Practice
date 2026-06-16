SELECT
    A.id AS "id",
    CASE
        WHEN A.p_id IS NULL THEN 'Root'
        WHEN (
            SELECT
                COUNT(*)
            FROM Tree B
            WHERE B.p_id = A.id
        ) = 0 THEN 'Leaf'
        ELSE 'Inner'
    END AS "type"
FROM Tree A