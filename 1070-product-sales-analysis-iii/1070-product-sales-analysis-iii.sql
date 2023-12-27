# Write your MySQL query statement below
select product_id, year first_year, quantity, price
from sales
where (product_id, year)
in
(SELECT product_id, min(year) year 
FROM Sales 
GROUP BY product_id)