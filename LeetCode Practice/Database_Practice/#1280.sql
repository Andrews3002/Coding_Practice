SELECT
    A.student_id,
    A.student_name,
    B.subject_name,
    COALESCE(C.attendance, 0) AS attended_exams
FROM Students A
CROSS JOIN Subjects B
LEFT JOIN (
    SELECT 
        student_id, 
        subject_name,
        COUNT(*) AS attendance
    FROM Examinations
    GROUP BY (student_id, subject_name)
) AS C
ON (A.student_id, B.subject_name) = (C.student_id, C.subject_name)
ORDER BY (A.student_id, B.subject_name) ASC