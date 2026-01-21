SELECT 
    A.student_id, 
    B.student_name,
    A.subject_name,
    COUNT(*) AS attended_exams
FROM Examinations A
JOIN Students B ON A.student_id = B.student_id
JOIN Subjects C ON A.subject_name = C.subject_name
GROUP BY (A.student_id, B.student_name, A.subject_name)
ORDER BY (A.student_id, A.subject_name) ASC