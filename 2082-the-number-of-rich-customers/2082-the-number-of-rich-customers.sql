# Write your MySQL query statement below
# select (count(s.customer_id) where s.amount>500) as rich_count from Store s
select count(distinct customer_id) as rich_count from Store
where amount>500