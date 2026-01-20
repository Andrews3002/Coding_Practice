SELECT 
CASE
    WHEN A.activity_date BETWEEN DATE '2019-06-27' AND '2019-07-27'
    THEN A.activity_date
END AS day,
COUNT(DISTINCT A.user_id) AS active_users
FROM Activity A
GROUP BY (A.activity_date)