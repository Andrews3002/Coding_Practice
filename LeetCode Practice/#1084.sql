SELECT A.product_id, C.product_name 
FROM Product A
WHERE A.product_id NOT IN(
    SELECT B.product_id FROM Sales B
    WHERE B.sale_date < DATE '2019-01-01' OR B.sale_date > DATE '2019-03-31'
)
JOIN Product C
ON A.product_id = C.product_id;