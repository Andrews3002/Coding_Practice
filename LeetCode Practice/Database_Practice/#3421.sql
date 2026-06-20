SELECT
    a.student_id AS "student_id",
    a.subject AS "subject",
    MIN(a.exam_date) AS "first_exam_date",
    MAX(a.exam_date) AS "last_exam_date"
FROM scores a
GROUP BY a.student_id, a.subject
HAVING MIN(a.exam_date) != MAX(a.exam_date)