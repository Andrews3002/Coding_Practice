SELECT A.customer_number FROM Orders A
ORDER BY A.customer_number
WHERE MAX(COUNT(*));