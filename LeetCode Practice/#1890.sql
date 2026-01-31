SELECT
    user_id,
    MAX(time_stamp) AS last_stamp
FROM Logins
WHERE times_stamp BETWEEN DATE'2020-01-01' AND DATE'2020-12-31'
GROUP BY user_id