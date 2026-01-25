SELECT
    sell_date,
    COUNT(*) AS num_sold,
    string_agg(product, ', ' ORDER BY product ASC) AS products
FROM Activities
GROUP BY sell_date
ORDER BY sell_date ASC;