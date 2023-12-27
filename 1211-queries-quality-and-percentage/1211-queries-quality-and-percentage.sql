# Write your MySQL query statement below
select distinct query_name, round(avg(rating/position),2) quality, 
round((sum( if(rating<3,1,0))/count(rating))* 100,2) poor_query_percentage
from queries 
where query_name is not null
group by query_name

# # ROUND(SUM(CASE WHEN rating < 3 THEN 1 ELSE 0 END) / COUNT(*) * 100, 2) AS poor_query_percentage
# SELECT QUERY_NAME, ROUND(AVG(RATING/POSITION), 2) AS QUALITY, 
# ROUND(AVG(IF(RATING<3,1,0))*100, 2) AS POOR_QUERY_PERCENTAGE
# FROM QUERIES
# GROUP BY QUERY_NAME