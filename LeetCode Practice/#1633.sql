SELECT 
    contest_id,
    ROUND((((COUNT(*)::numeric)/(SELECT COUNT(*) FROM Users))::numeric)*100 ,2) AS percentage
FROM Register
GROUP BY contest_id