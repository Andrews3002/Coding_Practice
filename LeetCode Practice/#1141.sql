SELECT 
A.activity_date AS day,
COUNT(DISTINCT A.user_id) AS active_users
FROM Activity A
GROUP BY (A.activity_date)
HAVING A.activity_date BETWEEN DATE '2019-06-28' AND DATE '2019-07-27';