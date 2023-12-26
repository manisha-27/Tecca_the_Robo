# Write your MySQL query statement below
select sell_date, (count(sell_date)) as num_sold, GROUP_CONCAT(Distinct product order by product) as products
FROM (select distinct sell_date, product from Activities) as Activities
Group By sell_date;