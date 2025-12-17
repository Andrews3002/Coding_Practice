-- Write your PostgreSQL query statement below
SELECT a.email AS Email
FROM Person a
JOIN Person b 
ON a.email = b.email