SELECT
    CASE
        WHEN A.p_id = NULL THEN 'ROOT'
        WHEN (
            SELECT
                COUNT(*)
            FROM Tree B
            WHERE B.p_id = A.id
        ) = 0 THEN 'LEAF'
        ELSE 'INNER'
    END 
FROM Tree A