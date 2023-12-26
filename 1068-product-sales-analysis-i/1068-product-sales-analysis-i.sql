# Write your MySQL query statement below
# SELECT a.product_name, b.year, b.price from Sales AS a
# left join Product AS b
# using(sale_id)
# where b.product_id is null;

SELECT b.product_name, a.year, a.price 
FROM Sales a
INNER JOIN Product b
ON a.product_id = b.product_id
