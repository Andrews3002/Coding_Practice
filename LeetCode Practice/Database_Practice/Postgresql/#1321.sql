WITH firstQ AS (
    SELECT
        visited_on,
        SUM(amount) AS "amount"
    FROM Customer
    GROUP BY visited_on
),
secondQ AS (
    SELECT
        visited_on,
        CASE
	        WHEN 1=2 THEN 0
	        ELSE(
                SELECT
                    SUM(amount)
                FROM firstQ q
                WHERE q.visited_on >= visited_on-6
                AND q.visited_on < visited_on+1
            )
        END AS "amount",
        CASE
	        WHEN 1=2 THEN 0
	        ELSE(
                SELECT
                    COUNT(*)
                FROM firstQ q
                WHERE q.visited_on >= visited_on-6
                AND q.visited_on < visited_on+1
            )
        END AS "prevdays"
    FROM firstQ
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