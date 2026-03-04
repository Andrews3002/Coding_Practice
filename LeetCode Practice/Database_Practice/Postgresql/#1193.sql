SELECT 
    B.month AS "month",
    B.country AS "country",
    COUNT(*) AS "trans_count",
    COUNT(*) FILTER(WHERE B.state = "approved") AS "approved_count",
    SUM(amount) AS "trans_total_amount",
    SUM(amount) FILTER(WHERE B.state = "approved") AS "approved_total_amount"
FROM (
    SELECT
        A.id AS "id",
        A.country AS "country",
        A.state AS "state",
        A.amount AS "amount",
        TO_CHAR(A.trans_date, 'YYYY-MM') AS "month"
    FROM Transactions A
) AS B
GROUP BY B.month, B.country