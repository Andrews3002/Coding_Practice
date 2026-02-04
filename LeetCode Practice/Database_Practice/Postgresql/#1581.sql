SELECT 
    A.customer_id,
    COUNT(*) AS count_no_trans
FROM (
    SELECT * FROM Visits
    WHERE visit_id NOT IN (
        SELECT visit_id FROM Transactions
    )
) AS A
GROUP BY A.customer_id