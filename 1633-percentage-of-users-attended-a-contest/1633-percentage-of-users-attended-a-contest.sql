# Write your MySQL query statement below
# select res.contest_id, (res.contestant/count(u.user_id)) *100 percentage
# from (select distinct r.contest_id, count(r.contest_id) contestant from register r join users u on u.user_id=r.user_id) res
# order by contest_id

# SELECT res.contest_id, (res.contestant / COUNT(u.user_id)) * 100 AS percentage
# FROM (
#     SELECT r.contest_id, COUNT(DISTINCT r.user_id) AS contestant
#     FROM register r
#     GROUP BY r.contest_id
# ) res
# JOIN users u ON u.user_id = res.user_id
# GROUP BY res.contest_id
# ORDER BY res.contest_id;

select contest_id, round((count(distinct user_id)/(select count(user_id) from users))*100,2) percentage
from register
group by contest_id
order by percentage desc, contest_id;

# SELECT contest_id,
# ROUND(COUNT(DISTINCT user_id) * 100 / (SELECT COUNT(user_id) FROM Users), 2) as percentage
# FROM Register
# GROUP BY contest_id
# ORDER BY percentage desc, contest_id
