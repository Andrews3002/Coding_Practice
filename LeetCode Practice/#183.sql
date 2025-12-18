-- Write your PostgreSQL query statement below
SELECT a.name AS Customers
FROM Customers a
WHERE a.name NOT IN (
    SELECT cust.name
    FROM Customers cust
    JOIN Orders ord
    ON cust.id = ord.customerId
);