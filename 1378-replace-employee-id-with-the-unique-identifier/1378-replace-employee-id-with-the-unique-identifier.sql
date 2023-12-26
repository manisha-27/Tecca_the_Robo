# Write your MySQL query statement below
select B.unique_id, A.name from Employees AS A
left join EmployeeUNI AS B 
ON B.id=A.id;