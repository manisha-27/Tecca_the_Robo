# Write your MySQL query statement below
# select p.product_name, sum(o.unit)
# from Orders o join Products p on o.product_id=p.product_id
# group by p.product_id
# having total_units>=100
# order by o.order_date;

SELECT p.product_name, SUM(o.unit) AS unit
FROM Orders o
JOIN Products p ON o.product_id = p.product_id
where o.order_date like '2020-02%'
GROUP BY p.product_id
HAVING unit >= 100
ORDER BY unit DESC;
