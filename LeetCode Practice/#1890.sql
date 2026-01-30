SELECT
    user_id,
    MAX(datetime) AS last_stamp
FROM Logins
GROUP BY user_id
WHERE user_id IN (
    SELECT user_id FROM Logins
    WHERE datetime >= '2021-01-01'
);