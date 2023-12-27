# Write your MySQL query statement below
# select e1.name
# from employee e1 left join employee e2 on e1.id=e2.managerId
# group by e1.id
# having count(e2.name)>=5 or count(e2.name) is null and e1.id is not null

Select m.name
from employee as e
inner join employee as m
on e.managerId=m.id
group by e.managerId 
having count(e.id)>=5

# SELECT e1.name
# FROM employee e1
# LEFT JOIN employee e2 ON e1.id=e2.managerId
# GROUP BY e1.id
# HAVING COUNT(e2.name) >= 5;

# SELECT e1.name
# FROM employee e1
# JOIN employee e2 ON e1.id = e2.managerId
# GROUP BY e2.managerId
# HAVING COUNT(DISTINCT e2.id) > 5;