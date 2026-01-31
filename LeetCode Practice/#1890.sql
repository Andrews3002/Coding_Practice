SELECT
    A.user_id,
    MAX(A.time_stamp) AS last_stamp
FROM (
    SELECT 
        user_id,
        time_stamp
    FROM Logins
    WHERE time_stamp BETWEEN DATE '2020-01-01' AND DATE '2020-12-31'
) A
GROUP BY A.user_id