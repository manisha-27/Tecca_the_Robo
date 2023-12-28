# Write your MySQL query statement below
(select u.name results
from movierating m left join users u on m.user_id=u.user_id
group by m.user_id
order by count(*) desc, name
limit 1)

union all

(select m.title results
from movierating mr left join movies m on mr.movie_id=m.movie_id
where mr.created_at like '2020-02%'
group by mr.movie_id
order by avg(rating) desc, m.title
limit 1)



# # Write your MySQL query statement below
# (SELECT name AS results
# FROM MovieRating JOIN Users USING(user_id)
# GROUP BY name
# ORDER BY COUNT(*) DESC, name
# LIMIT 1)

# UNION ALL

# (SELECT title AS results
# FROM MovieRating JOIN Movies USING(movie_id)
# WHERE EXTRACT(YEAR_MONTH FROM created_at) = 202002
# GROUP BY title
# ORDER BY AVG(rating) DESC, title
# LIMIT 1);