# Write your MySQL query statement below
# select product_id, avg(units*price) average_price
# from (select p.product_id, u.purchase_date, u.units, p.price from Prices p join UnitsSold u where p.purchase_date between p.start_date and p.end_date ) S
# Group by product_id

# SELECT product_id, IFNULL(ROUND(SUM(units*price)/SUM(units),2),0) AS average_price
# FROM (
#     SELECT p.product_id, u.purchase_date, u.units, p.price
#     FROM Prices p
#     JOIN UnitsSold u ON p.product_id = u.product_id
#     WHERE u.purchase_date BETWEEN p.start_date AND p.end_date
# ) AS S
# GROUP BY product_id;

SELECT p.product_id, IFNULL(ROUND(SUM(units*price)/SUM(units),2),0) AS average_price
FROM Prices p LEFT JOIN UnitsSold u
ON p.product_id = u.product_id AND
u.purchase_date BETWEEN start_date AND end_date
group by product_id

# SELECT p.product_id, u.purchase_date, u.units, p.price
#     FROM Prices p
#     JOIN UnitsSold u ON p.product_id = u.product_id
#     WHERE u.purchase_date BETWEEN p.start_date AND p.end_date