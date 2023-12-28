# Write your MySQL query statement below
select e1.employee_id
from employees e1 left join employees e2 on e1.manager_id=e2.employee_id
where e1.salary < 30000 and e2.employee_id is null and e1.manager_id is not null
order by e1.employee_id;


# select
#     e.employee_id
# from employees e
# left join employees mng on mng.employee_id = e.manager_id
# where e.salary < 30000
#     and e.manager_id is not null
#     and mng.employee_id is null
# order by e.employee_id;