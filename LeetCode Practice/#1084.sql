SELECT A.product_id, C.product_name 
FROM Product A
JOIN Product C
ON A.product_id = C.product_id
WHERE A.product_id IN(
    SELECT B.product_id FROM Sales B
    WHERE B.sale_date >= DATE '2019-01-01' OR B.sale_date <= DATE '2019-03-31'
) AND A.product_id NOT IN(
    SELECT D.product_id FROM Sales D
    WHERE D.sale_date < DATE '2019-01-01' OR D.sale_date > DATE '2019-03-31'
);