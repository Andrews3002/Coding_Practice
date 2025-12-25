-- Write your PostgreSQL query statement below
DELETE FROM Person
WHERE id NOT IN(
    SELECT A.id, A.email FROM Person
    SELECT B.id, B.email FROM Person B
    WHERE B.email = A.email AND B.id > A.id
)