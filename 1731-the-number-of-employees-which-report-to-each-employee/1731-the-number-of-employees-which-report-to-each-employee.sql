# Write your MySQL query statement below
# select e1.employee_id, e1.name, count(e1.reports_to) reports_count, avg(e1.age) average_age
# from employees e1 join employees e2 on e1.employee_id=e2.reports_to
# group by e2.reports_to
# order by e1.employee_id

# SELECT e1.employee_id, e1.name, COUNT(e1.employee_id) AS reports_count, AVG(e1.age) AS average_age
# FROM employees e1
# JOIN employees e2 ON e1.employee_id = e2.reports_to 
# GROUP BY e2.reports_to
# ORDER BY e1.employee_id;

SELECT e1.employee_id, e1.name, count(e2.employee_id) reports_count, round(avg(e2.age)) average_age
FROM employees e1
JOIN employees e2 ON e1.employee_id = e2.reports_to
GROUP BY e2.reports_to
ORDER BY e1.employee_id;


# SELECT
#     emp1.employee_id,
#     emp1.name,
#     COUNT(emp2.employee_id) AS reports_count,
#     ROUND(AVG(emp2.age)) AS average_age
# FROM Employees emp1
# INNER JOIN Employees emp2 ON emp1.employee_id = emp2.reports_to
# GROUP BY emp1.employee_id
# ORDER BY emp1.employee_id