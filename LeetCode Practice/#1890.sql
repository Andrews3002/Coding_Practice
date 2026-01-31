SELECT
    user_id,
    MAX(time_stamp WHERE times_stamp BETWEEN DATE'2020-01-01' AND DATE'2020-12-31') AS last_stamp
FROM Logins
GROUP BY user_id