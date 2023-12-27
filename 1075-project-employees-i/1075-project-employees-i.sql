# Write your MySQL query statement below
select p.project_id, round(avg(e.experience_years),2) average_years
from project p join employee e on p.employee_id=e.employee_id
group by p.project_id;

# SELECT 
#     prj.project_id, 
#     ROUND(AVG(e.experience_years), 2) AS average_years
# FROM employee e
# RIGHT JOIN project prj 
#     ON prj.employee_id = e.employee_id
# GROUP BY prj.project_id;