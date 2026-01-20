SELECT 
    A.query_name,
    ROUND((SUM(A.rating::numeric / A.position::numeric) / COUNT(*)::numeric), 2) AS quality,
    ROUND((((COUNT(*) FILTER(WHERE A.rating < 3))::numeric/(COUNT(*)::numeric))*100),2) AS poor_query_percentage
FROM Queries A
GROUP BY (A.query_name)