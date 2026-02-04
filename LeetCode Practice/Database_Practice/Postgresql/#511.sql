SELECT A.player_id, A.event_date AS first_login FROM Activity A
WHERE NOT EXISTS (
    SELECT 1 FROM Activity B
    WHERE A.player_id = B.player_id
    AND A.event_date > B.event_date
);