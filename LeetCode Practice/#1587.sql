SELECT
    A.name,
    B.balance
FROM Users A
JOIN (
    SELECT
        account,
        SUM(amount) AS balance
    FROM Transactions
    GROUP BY account
) as B
ON A.account = B.account
WHERE B.balance > 1000;