SELECT * FROM (
    SELECT * FROM Cinema
    WHERE id % 2 != 0
) A
WHERE A.description != 'boring'
ORDER BY A.rating DESC;