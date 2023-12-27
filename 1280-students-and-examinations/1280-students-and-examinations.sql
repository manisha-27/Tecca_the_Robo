# Write your MySQL query statement below
# select s.student_id, s.student_name, e.subject_name, count(distinct e.subject_name) attended_exams
# from students s
# CROSS JOIN Subjects sub
# LEFT JOIN 
# examinations e on s.student_id=e.student_id and sub.subject_name=e.subject_name
# group by s.student_id, s.student_name, sub.subject_name
# order by s.student_id, s.student_name

SELECT s.student_id, s.student_name, sub.subject_name, COUNT(e.subject_name) AS attended_exams
FROM students s
CROSS JOIN Subjects sub
LEFT JOIN examinations e ON s.student_id = e.student_id AND sub.subject_name = e.subject_name
GROUP BY s.student_id, s.student_name, sub.subject_name
ORDER BY s.student_id, s.student_name, sub.subject_name;
