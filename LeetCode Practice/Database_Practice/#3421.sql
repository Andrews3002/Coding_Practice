SELECT
    a.student_id AS "student_id",
    a.subject AS "subject",
    b.score AS "first_score",
    c.score AS "latest_score"
FROM (
    SELECT
        student_id AS student_id,
        subject AS subject,
        MIN(exam_date) AS first_exam_date,
        MAX(exam_date) AS last_exam_date
    FROM scores
    GROUP BY student_id, subject
    HAVING MIN(exam_date) != MAX(exam_date)
) a
JOIN scores b
ON a.student_id = b.student_id AND a.subject = b.subject AND a.first_exam_date = b.exam_date
JOIN scores c
ON a.student_id = c.student_id AND a.subject = c.subject AND a.last_exam_date = c.exam_date
WHERE b.score < c.score;