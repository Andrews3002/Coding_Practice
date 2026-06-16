SELECT a.name AS Customers FROM Customers a
WHERE a.id NOT IN (
    SELECT b.id FROM Customers b
    JOIN Orders c
    ON b.id = c.customerId
);