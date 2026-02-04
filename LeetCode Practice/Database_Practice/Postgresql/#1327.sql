SELECT B.product_name, A.unit 
FROM (
    SELECT product_id, SUM(unit) AS unit FROM Orders
    WHERE order_date BETWEEN DATE '2020-02-01' AND DATE '2020-02-29'
    GROUP BY product_id
    ORDER BY product_id ASC
) AS A
JOIN Products B
ON A.product_id = B.product_id
WHERE A.unit >= 100;