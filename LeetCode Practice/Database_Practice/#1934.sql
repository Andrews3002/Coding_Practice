SELECT
    c.user_id,
    ROUND((SUM(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END)/SUM(CASE WHEN c.action IN ('timeout', 'confirmed') THEN 1 ELSE 0 END)), 2) AS "confirmation_rate"
FROM signups s
LEFT JOIN confirmations c 
ON s.user_id = c.user_id
GROUP BY c.user_id;