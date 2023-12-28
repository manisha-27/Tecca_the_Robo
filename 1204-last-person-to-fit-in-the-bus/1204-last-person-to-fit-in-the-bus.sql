# Write your MySQL query statement below
# select person_name
# from queue
# group by person_id
# having sum(weight)<=1000
# order by turn desc
# limit 1

with cumulativeweight as(
select turn, person_name, sum(weight) over (order by turn) cumulative_wt
    from queue
)

select person_name
from cumulativeweight
where cumulative_wt<=1000
order by cumulative_wt desc
limit 1



# WITH CumulativeWeights AS (
#     SELECT 
#         person_name,
#         turn,
#         SUM(weight) OVER (ORDER BY turn) AS cumulative_weight
#     FROM 
#         queue
# )

# SELECT 
#     person_name
# FROM 
#     CumulativeWeights
# WHERE 
#     cumulative_weight <= 1000
# ORDER BY 
#     cumulative_weight DESC
# LIMIT 1;