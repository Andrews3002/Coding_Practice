SELECT 
    A.query_name,
    ROUND((SUM(A.rating::numeric / A.position::numeric) / COUNT(*)::numeric), 2) AS quality
    -- ROUND(((COUNT(A.rating < 3) / COUNT(*)) * 100), 2) AS poor_query_percentage
FROM Queries A
GROUP BY (A.query_name)