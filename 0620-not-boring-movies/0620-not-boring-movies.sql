# Write your MySQL query statement below
select id, movie, description, rating
from Cinema
where description!="boring" and id%2=1
order by rating desc;

# select id, movie, description, rating
# from cinema c
# where id % 2 = 1 and description <> 'boring'
# order by rating desc