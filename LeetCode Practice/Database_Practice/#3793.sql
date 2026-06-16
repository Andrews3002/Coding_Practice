SELECT
    user_id,
    COUNT(DISTINCT prompt) AS prompt_count,
    ROUND((SUM(tokens::numeric)/COUNT(DISTINCT prompt)::numeric), 2) AS avg_tokens
FROM prompts
GROUP BY user_id
HAVING COUNT(DISTINCT prompt) >= 3
AND 
COUNT(DISTINCT tokens) > 1
ORDER BY avg_tokens DESC, user_id ASC