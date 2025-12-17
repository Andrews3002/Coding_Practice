-- Write your PostgreSQL query statement below
SELECT per.firstname, per.lastname, addr.city, addr.state
FROM Person per
LEFT JOIN Address addr
ON per.personId = addr.personId;