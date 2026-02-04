DELETE FROM Person
WHERE id IN (
    SELECT A.id FROM Person A 
    JOIN Person B 
    ON A.email = B.email
    WHERE A.id > B.id
);