SELECT 
    contest_id,
    ROUND(((COUNT(*)::numeric)/MAX(A.rn)::numeric)*100 ,2) AS percentage
FROM Register
JOIN (
    SELECT 
        user_id, 
        ROW_NUMBER() OVER (ORDER BY user_id ASC) AS rn
    FROM Users
) AS A
ON user_id = A.user_id
GROUP BY contest_id