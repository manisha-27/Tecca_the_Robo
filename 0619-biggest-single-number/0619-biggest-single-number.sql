# Write your MySQL query statement below
# select num
# from mynumbers
# group by num
# having count(num)=1 or num is null
# order by num desc
# limit 1

select max(num) num
from (select num from mynumbers group by num having count(num)=1) a