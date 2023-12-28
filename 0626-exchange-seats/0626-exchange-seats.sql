# Write your MySQL query statement below
# select id, if(id%2=1, lead(student,1,student) over (order by id),lag(student) over(order by id)) student
# from seat

select case 
when id= (select max(id) from seat) and id%2=1
then id
when id%2=1
then id+1
else
id-1
end as id, student
from seat
order by id


# SELECT 
#     CASE 
#         WHEN id = (SELECT MAX(id) FROM seat) AND id % 2 = 1
#             THEN id 
#         WHEN id % 2 = 1
#             THEN id + 1
#         ELSE id - 1
#     END AS id,
#     student
# FROM seat
# ORDER BY id

# SELECT 
#     CASE 
#         WHEN id % 2 = 1 AND id < (SELECT MAX(id) FROM Seat) THEN id + 1
#         WHEN id % 2 = 0 THEN id - 1
#         ELSE id
#     END AS id,
#     student
# FROM Seat
# ORDER BY id;


# SELECT 
#     id, 
#     IF(id % 2 = 1, LEAD(student, 1, student) OVER(ORDER BY id), LAG(student) OVER(ORDER BY id)) AS student
# FROM 
#     Seat;