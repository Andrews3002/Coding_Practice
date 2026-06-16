WITH q1 AS (
    SELECT
        user_id,
        COUNT(*) AS "count"
    FROM MovieRating
    GROUP BY user_id
),
q2 AS (
    SELECT
        A.name AS "results"
    FROM Users A
    JOIN q1 B
    ON A.user_id = B.user_id
    ORDER BY B.count DESC, A.name ASC
    LIMIT 1
),
q3 AS (
    SELECT
        movie_id,
        AVG(rating) AS "avg"
    FROM MovieRating
    WHERE created_at BETWEEN DATE '2020-02-01' AND DATE '2020-02-29'
    GROUP BY movie_id
),
q4 AS (
    SELECT
        A.title AS "results"
    FROM Movies A
    JOIN q3 B
    ON A.movie_id = B.movie_id
    ORDER BY B.avg DESC, A.title ASC
    LIMIT 1
)
SELECT
    results
FROM q2

UNION ALL

SELECT
    results
FROM q4