SELECT 
A.author_id AS id 
FROM Views A
GROUP BY (A.author_id)
HAVING A.author_id = A.viewer_id
ORDER BY (A.author_id) ASC;