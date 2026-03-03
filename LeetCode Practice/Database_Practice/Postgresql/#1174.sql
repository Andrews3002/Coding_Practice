SELECT
ROUND((COUNT(*) FILTER(WHERE B.first_date = A.customer_pref_delivery_date)::numeric / COUNT(DISTINCT A.customer_id)::numeric) * 100, 2) AS "immediate_percentage"
FROM Delivery A
JOIN (
    SELECT
    customer_id,
    MIN(order_date) AS "first_date"
    FROM Delivery
    GROUP BY customer_id
) AS B
ON A.customer_id = B.customer_id
AND A.order_date = B.first_date