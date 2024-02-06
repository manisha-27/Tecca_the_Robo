# Write your MySQL query statement below
# select d.name Department, e.name Employee, e.salary 
# from employee e join department d on e.departmentId=d.id 
# where (e.name, e.salary) in (select name, max(salary) from employee group by departmentId);

# select name, salary from employee group by departmentId having salary=max(salary);

# SELECT d.name AS Department, e.name AS Employee, e.salary
# FROM employee e
# JOIN department d ON e.departmentId = d.id
# WHERE (e.name, e.salary) IN (
#     SELECT name, MAX(salary) AS max_salary
#     FROM employee
#     GROUP BY departmentId
# );

SELECT d.name AS Department, e.name AS Employee, e.salary
FROM employee e
JOIN department d ON e.departmentId = d.id
WHERE (e.departmentId, e.salary) IN (
    SELECT departmentId, MAX(salary) AS max_salary
    FROM employee
    GROUP BY departmentId
);
