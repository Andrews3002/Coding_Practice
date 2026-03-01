SELECT 
    A.user_id AS "buyer_id",
    A.join_date AS "join_date",
    COALESCE(B.total_orders, 0) AS "orders_in_2019"
FROM Users A
LEFT JOIN (
    SELECT 
        buyer_id AS "buyer_id",
        COUNT(*) AS "total_orders"
    FROM Orders
    WHERE 
        order_date > DATE '2019-01-01' 
        AND 
        order_date < DATE '2020-01-01'
    GROUP BY buyer_id
) AS B
ON A.user_id = B.buyer_id