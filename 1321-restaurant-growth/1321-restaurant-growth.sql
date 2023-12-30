# Write your MySQL query statement below

# with cte as(
#     select 
#         visited_on, 
#         sum(amount) as amount
#     from customer
#     group by visited_on
# )

# select 
#         a.visited_on,
#         round(sum(b.amount),2) as amount,
#         round(avg(b.amount),2) as average_amount
# from cte a, cte b
# where datediff(a.visited_on, b.visited_on) between 0 and 6
# group by a.visited_on
# having count(*)>6
# order by a.visited_on;

SELECT 
    DISTINCT visited_on,
    amount,
    ROUND(amount/7, 2) AS average_amount
FROM 
    (SELECT
        visited_on,
        SUM(amount) OVER (
            ORDER BY visited_on 
            RANGE BETWEEN INTERVAL 6 DAY PRECEDING AND CURRENT ROW
        ) AS amount,

        MIN(visited_on) OVER() as firstDay
    FROM Customer
    ) AS c
WHERE
    visited_on >= firstDay + INTERVAL 6 DAY;