SELECT
    a.student_id AS "student_id",
    a.subject AS "subject",
    MIN(a.score) AS "first_score",
    MAX(a.score) AS "latest_score"
FROM scores a
GROUP BY (a.student_id, a.subject)