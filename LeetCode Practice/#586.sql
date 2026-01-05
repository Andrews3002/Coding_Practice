SELECT A.customer_number FROM Orders A
GROUP BY A.customer_number
WHERE MAX(COUNT(*));