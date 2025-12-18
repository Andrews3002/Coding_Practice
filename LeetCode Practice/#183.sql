-- Write your PostgreSQL query statement below
SELECT cust.name AS "Customers"
FROM Customers cust
WHERE cust.id NOT IN (
    SELECT ord.customerId
    FROM Orders ord
);