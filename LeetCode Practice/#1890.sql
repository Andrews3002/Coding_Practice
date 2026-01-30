SELECT
    user_id,
    MAX(time_stamp) AS last_stamp
FROM Logins
WHERE user_id IN (
    SELECT user_id FROM Logins
    WHERE time_stamp >= '2020-01-01'
)
GROUP BY user_id