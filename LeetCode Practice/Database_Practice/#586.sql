SELECT A.customer_number FROM (
    SELECT customer_number, ROW_NUMBER() OVER (ORDER BY COUNT(*) DESC) rn
    FROM Orders
    GROUP BY customer_number
) A
WHERE A.rn = 1;