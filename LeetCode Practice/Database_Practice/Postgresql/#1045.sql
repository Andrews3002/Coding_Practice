SELECT
    CASE
        WHEN (
            SELECT COUNT(*)
            FROM Product
        ) = A.ccount THEN A.customer_id
        ELSE NULL
    END AS "customer_id"
FROM (
    SELECT
        B.customer_id AS "customer_id",
        COUNT(*) AS "ccount"
    FROM (
        SELECT
            customer_id,
            product_key
        FROM Customer
        GROUP BY customer_id, product_key
    ) AS B
    GROUP BY B.customer_id
) AS A
WHERE cutomer_id IS NOT NULL