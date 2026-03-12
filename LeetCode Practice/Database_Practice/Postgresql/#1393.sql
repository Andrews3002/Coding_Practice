WITH buy AS (
    SELECT
        stock_name,
        SUM(price) AS "price"
    FROM Stocks
    WHERE operation = 'Buy'
    GROUP BY stock_name
),
sell AS (
    SELECT
        stock_name,
        SUM(price) AS "price"
    FROM Stocks
    WHERE operation = 'Sell'
    GROUP BY stock_name
)
SELECT
    A.stock_name AS "stock_name",
    A.price - B.price AS "capital_gain_loss"
FROM sell A
JOIN buy B
ON A.stock_name = B.stock_name