SELECT 
A.author_id AS id 
FROM Views A
WHERE A.author_id = A.viewer_id
GROUP BY (A.author_id)
ORDER BY (A.author_id) ASC;