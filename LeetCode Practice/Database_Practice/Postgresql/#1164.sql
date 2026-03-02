SELECT 
    DISTINCT A.product_id AS "product_id",
    COALESCE(B.new_price, 10) AS "price"
FROM Products A
LEFT JOIN (
    SELECT
        B.product_id AS "product_id",
        B.new_price AS "new_price",
        B.change_date AS "change_date"
    FROM Products B
    WHERE B.product_id, B.change_date IN (
        SELECT
            A.product_id AS "product_id",
            MAX(change_date) AS "change_date"
        FROM (
            SELECT *
            FROM Products
            WHERE change_date < DATE '2019-08-17'
        ) AS A
        GROUP BY A.product_id
    )
) AS B
ON A.product_id = B.product_id