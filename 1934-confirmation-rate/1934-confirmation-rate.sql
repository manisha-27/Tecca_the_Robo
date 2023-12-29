# Write your MySQL query statement below
# # Write your MySQL query statement below
# select s.user_id, round(avg(if(c.action="confirmed",1,0)),2) as confirmation_rate
# from Signups as s left join Confirmations as c on s.user_id= c.user_id group by user_id;
 
 
select s.user_id, round(sum(if(c.action='confirmed',1,0))/count(*),2) as confirmation_rate
from signups as s left join confirmations as c on s.user_id=c.user_id
group by s.user_id;


# SELECT s.user_id,ROUND(SUM(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END)/count(*),2)as confirmation_rate
# FROM Signups s
# LEFT JOIN Confirmations c ON s.user_id=c.user_id
# GROUP BY s.user_id

# with cte_1 as (
# select user_id,count(*) as confirmed from Confirmations where action='confirmed'
# group by user_id 
# )
# ,cte_2 as 
# (
# select user_id,count(*) as timeout from Confirmations where action='timeout'
# group by user_id 
# ),cte_3 as
# (
#     select * from Signups
# )
# select cte_3.user_id,
# round(coalesce(coalesce(confirmed,0)/(coalesce(confirmed,0)+coalesce(timeout,0)),0),2)  as confirmation_rate
# from cte_3 left join cte_1 on cte_3.user_id=cte_1.user_id left join cte_2 on 
# cte_2.user_id=cte_3.user_id