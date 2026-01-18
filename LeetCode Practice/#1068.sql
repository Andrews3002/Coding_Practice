SELECT A.product_name, B.year, B.price FROM Product A
LEFT JOIN Sales B
ON A.product_id = B.product_id;