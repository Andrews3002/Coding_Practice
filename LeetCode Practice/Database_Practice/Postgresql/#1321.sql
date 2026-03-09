WITH firstQ AS (
    SELECT
        visited_on,
        SUM(amount) AS "amount"
    FROM Customer
    GROUP BY visited_on
),
secondQ AS (
    SELECT
        A.visited_on,
        (
            SELECT
                SUM(amount)
            FROM firstQ q
            WHERE q.visited_on >= A.visited_on-6
            AND q.visited_on < A.visited_on+1
        ) AS "amount",
        (
            SELECT
                COUNT(*)
            FROM firstQ q
            WHERE q.visited_on >= A.visited_on-6
            AND q.visited_on < A.visited_on+1
        ) AS "prevdays"
    FROM firstQ A
),
thirdQ AS (
    SELECT
        visited_on,
        amount,
        prevdays
    FROM secondQ
    WHERE visited_on-6 >= (
        SELECT
            MIN(visited_on)
        FROM firstQ
    )
)
SELECT
    visited_on,
    amount,
    ROUND(amount::numeric/prevdays::numeric,2) AS "average_amount"
FROM thirdQ