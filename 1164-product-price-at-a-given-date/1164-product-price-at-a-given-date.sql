# Write your MySQL query statement below
# select product_id, new_price price
# from products
# where change_date='2019-08-16'
# union
select product_id, 10 price
from products
group by product_id
having min(change_date)>'2019-08-16'
union
select product_id, new_price price
from products
where (product_id, change_date) in (
select product_id, max(change_date)
    from products
    where change_date<='2019-08-16'
    group by product_id
)
# group by product_id
# having max(change_date)<'2019-08-16'





# select b.* from (select a.product_id,
# case
#  when a.change_date = "2019-08-16" then a.new_price 
#  when (a. change_date > "2019-08-16" and a.previous_value is NULL) then 10
#  when (a. change_date > "2019-08-16" and a.previous_value is not NULL) then a.previous_value      end as price 
#  from (SELECT product_id, new_price,change_date,
# LAG(new_price) OVER(partition by product_id ORDER BY product_id , change_date) as previous_value
# FROM  products) a)b
# where b.price is not null
# order by b.price desc 