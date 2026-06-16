SELECT
    A.product_id AS "product_id",
    A.year AS "first_year",
    A.quantity AS "quantity",
    A.price AS "price"
FROM Sales A
JOIN (
    SELECT
        product_id,
        MIN(year) AS intro_year
    FROM Sales
    GROUP BY product_id
) AS B
ON A.product_id = B.product_id
WHERE A.year = B.intro_year