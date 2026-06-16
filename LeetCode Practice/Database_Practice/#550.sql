SELECT
    ROUND((SUM(C.condition)::numeric/COUNT(DISTINCT C.player_id)::numeric),2) AS "fraction"
FROM (
    SELECT
        A.player_id AS "player_id",
        CASE
            WHEN A.event_date = B.first_day + 1 THEN 1
            ELSE 0
        END AS "condition"
    FROM Activity A
    JOIN (
        SELECT
            player_id,
            MIN(event_date) AS first_day
        FROM Activity
        GROUP BY player_id
    ) AS B
    ON A.player_id = B.player_id
) AS C
