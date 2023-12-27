# Write your MySQL query statement below
select activity_date day, count(distinct user_id) active_users
from activity
where
datediff('2019-07-27', activity_date)<30 and datediff('2019-07-27',activity_date)>=0
group by activity_date;



# SELECT 
#     activity_date AS day, 
#     COUNT(DISTINCT user_id) AS active_users
# FROM 
#     Activity
# WHERE 
#     DATEDIFF('2019-07-27', activity_date) < 30 AND DATEDIFF('2019-07-27', activity_date)>=0
# GROUP BY 1