# Write your MySQL query statement below
# select l1.num consecutiveNums
# from logs l1
# group by l1.num
# having count(l1.num)>=3
# # where (select * from logs l2 where l1.num=l2.num)>=3


select distinct num consecutivenums
from (
select num, lead(num) over (order by id) as lead_num, lag(num) over (order by id) as lag_num from logs
) l
where num=lead_num and num=lag_num

# SELECT DISTINCT num AS ConsecutiveNums
# FROM (
#     SELECT num, 
#            LEAD(num) OVER (ORDER BY id) AS lead_num, 
#            LAG(num) OVER (ORDER BY id) AS lag_num
#     FROM logs
# ) AS l
# WHERE num = lead_num
# AND num = lag_num;