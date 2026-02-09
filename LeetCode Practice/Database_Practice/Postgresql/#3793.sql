SELECT
    user_id,
    COUNT(DISTINCT prompt) AS prompt_count,
    ROUND((SUM(tokens::numeric)/promp_count::numeric), 2) AS avg_tokens
FROM prompts
WHERE promp_count >= 3
GROUP BY user_id
ORDER BY avg_tokens DESC, user_id ASC