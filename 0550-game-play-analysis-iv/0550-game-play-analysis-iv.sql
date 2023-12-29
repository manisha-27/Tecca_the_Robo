# Write your MySQL query statement below

with cte as(
    select player_id, min(event_date) as first_login
    from activity
    group by player_id),
    
cte2 as(
    select *, date_add(first_login,interval 1 day) as next_date
    from cte
)

select round((select count(distinct player_id)
from activity
where (player_id, event_date) in
(select player_id, next_date from cte2))/
(select count(distinct player_id)
 from activity
),2) as fraction;















# SELECT ROUND(SUM(date_eve) / COUNT(DISTINCT player_id), 2) AS fraction
# FROM (
#     SELECT p1.player_id, min(event_date) min1_date, (elect DISTINCT salary 
# FROM activity
# ORDER BY event_date
# LIMIT 1
# OFFSET 1) min2_date
# ) a;

# SELECT ROUND(SUM(date_eve) / COUNT(DISTINCT player_id), 2) AS fraction
# FROM (
#     SELECT player_id, 
#     if(datediff((select DISTINCT event_date 
#         FROM activity
#         ORDER BY event_date
#         LIMIT 1
#         OFFSET 1),min(event_date))=1,1,0) date_eve
#     group by player_id
# ) a;

# SELECT player_id, if(datediff((select DISTINCT event_date 
#                                 FROM activity
#                                 ORDER BY event_date
#                                 LIMIT 1
#                                 OFFSET 1),min(event_date))=1,1,0) date_eve
# group by player_id

# select round(sum(max(date_eve))/count(distinct player_id)*100,2) as fraction
# from{
# select p1.player_id, if(datediff(p1.event_date,p2.event_date)=1,1,0) as date_eve
# from activity p1 join activity p2 on p1.player_id=p2.player_id
# } a

# SELECT ROUND(SUM(distinct date_eve) / COUNT(DISTINCT player_id), 2) AS fraction
# FROM (
#     SELECT p1.player_id, IF(DATEDIFF(p1.event_date, p2.event_date) = 1, 1, 0) AS date_eve
#     FROM activity p1
#     JOIN activity p2 ON p1.player_id = p2.player_id
# ) a;
# group by player_id;

# SELECT ROUND(SUM(date_eve) / COUNT(DISTINCT player_id), 2) AS fraction
# FROM (
#     SELECT p1.player_id, IF(DATEDIFF(p1.event_date, p2.event_date) = 1, 1, 0) AS date_eve
#     FROM activity p1
#     JOIN activity p2 ON p1.player_id = p2.player_id
# ) a;

# SELECT ROUND(
#         COUNT(player_id) / (SELECT COUNT(DISTINCT player_id) FROM activity),
#         2
#       ) AS fraction
# FROM (
#     SELECT p1.player_id
#     FROM activity p1
#     JOIN activity p2 ON p1.player_id = p2.player_id
#     WHERE DATEDIFF(p1.event_date, p2.event_date) = 1
# ) a;



# SELECT p1.player_id, IF(DATEDIFF(p1.event_date, p2.event_date) = 1, 1, 0) AS date_eve
# FROM activity p1
# JOIN activity p2 ON p1.player_id = p2.player_id

# SELECT p1.player_id, p1.device_id, p1.event_date, p1.games_played,
#        p2.player_id AS player_id_2, p2.device_id AS device_id_2, p2.event_date AS event_date_2, p2.games_played AS games_played_2,
#        IF(DATEDIFF(p1.event_date, p2.event_date) = 1, 1, 0) AS date_eve
# FROM activity p1
# JOIN activity p2 ON p1.player_id = p2.player_id;
