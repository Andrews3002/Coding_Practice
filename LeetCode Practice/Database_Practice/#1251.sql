SELECT 
    A.product_id,
    ROUND(
        COALESCE(
            (SUM(B.units::numeric * A.price::numeric)/SUM(B.units::numeric)),
            0
        ),
        2
    ) AS average_price
FROM 
    Prices A
LEFT JOIN 
    UnitsSold B
ON 
    A.product_id = B.product_id
    AND
    B.purchase_date BETWEEN A.start_date AND A.end_date
GROUP BY A.product_id