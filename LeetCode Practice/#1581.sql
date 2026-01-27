SELECT 
    A.customer_id,
    COUNT(*) AS amt_of_times
FROM (
    SELECT * FROM Visits
    WHERE visit_id NOT IN (
        SELECT visit_id FROM Transactions
    )
) AS A
GROUP BY A.customer_id