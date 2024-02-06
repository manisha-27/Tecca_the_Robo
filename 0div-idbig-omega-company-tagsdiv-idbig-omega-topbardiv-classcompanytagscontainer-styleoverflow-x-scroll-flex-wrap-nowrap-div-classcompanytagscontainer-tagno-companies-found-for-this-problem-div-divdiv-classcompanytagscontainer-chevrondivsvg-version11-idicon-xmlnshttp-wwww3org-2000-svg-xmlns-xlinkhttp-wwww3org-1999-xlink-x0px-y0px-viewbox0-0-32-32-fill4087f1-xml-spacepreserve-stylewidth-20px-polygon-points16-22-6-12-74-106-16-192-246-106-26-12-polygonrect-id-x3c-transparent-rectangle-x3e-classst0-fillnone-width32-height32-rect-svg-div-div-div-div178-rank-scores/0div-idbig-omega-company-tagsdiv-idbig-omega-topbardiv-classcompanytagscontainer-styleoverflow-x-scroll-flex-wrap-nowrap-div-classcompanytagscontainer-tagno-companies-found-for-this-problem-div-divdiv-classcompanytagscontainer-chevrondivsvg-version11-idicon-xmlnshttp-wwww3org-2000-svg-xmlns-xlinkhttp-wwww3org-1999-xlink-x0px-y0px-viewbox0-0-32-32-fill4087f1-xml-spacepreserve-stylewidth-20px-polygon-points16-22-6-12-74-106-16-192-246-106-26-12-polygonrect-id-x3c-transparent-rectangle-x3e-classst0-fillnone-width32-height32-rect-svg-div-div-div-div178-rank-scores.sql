# Write your MySQL query statement below
select score, Dense_RANK() over( order by score desc) as "rank" from scores;