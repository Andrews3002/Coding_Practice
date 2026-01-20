SELECT 
    A.product_id,
    ROUND(
        (SUM(A.units::numeric * B.price::numeric)/SUM(A.units::numeric)),
        2
    ) AS average_price
FROM 
    UnitsSold A
JOIN 
    Prices B
ON 
    A.product_id = B.product_id
    AND
    A.purchase_date BETWEEN B.start_date AND B.end_date
GROUP BY a.product_id