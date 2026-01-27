SELECT 
    user_id,
    COUNT(*)
FROM Followers
GROUP BY user_id
ORDER BY user_id ASC;