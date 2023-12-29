# Write your MySQL query statement below
# select round((sum(if(order=1,1,0)))/count(id))*100,2) as immediate_percentage
# from delivery
# where (id, order) in (
# select distinct customer_id, if(order_date=customer_pref_delivery_date,1,0) as order
#     from delivery
#     group by customer_id
# );

# SELECT ROUND((SUM(IF(d.order_date = a.s_order, 1, 0)) / COUNT(d.customer_id)) * 100, 2) AS immediate_percentage
# FROM delivery d
# JOIN (
#     SELECT customer_id, MIN(order_date) AS s_order
#     FROM delivery
#     GROUP BY customer_id
# ) AS a ON d.customer_id = a.customer_id;


select round((sum(if(order_date=customer_pref_delivery_date,1,0)))/count( distinct customer_id)*100,2) as immediate_percentage
from delivery
where (customer_id, order_date) in 
(select customer_id,  MIN(order_date) as sb_order
from delivery
group by customer_id
);

# SELECT ROUND(SUM(if( order_date = customer_pref_delivery_date , 1 , 0 )) * 100.0 / COUNT(DISTINCT customer_id), 2) AS immediate_percentage
# FROM Delivery
# WHERE (customer_id, order_date) IN (
#     SELECT customer_id, MIN(order_date) AS first_order_date
#     FROM Delivery
#     GROUP BY customer_id
# );

# SELECT 
#     ROUND(100*AVG(order_date = customer_pref_delivery_date), 2) AS immediate_percentage
# FROM 
#     Delivery 
#     JOIN (SELECT customer_id, MIN(order_date) AS order_date 
#           FROM Delivery 
#           GROUP BY customer_id) a USING (customer_id, order_date); 

# select distinct customer_id,  MIN(order_date) as s_order
# from delivery
# group by customer_id

# SELECT ROUND((SUM(IF(`order` = 1, 1, 0)) / COUNT(id)) * 100, 2) AS immediate_percentage
# FROM (
#     SELECT DISTINCT id, IF(order_date = customer_pref_delivery_date, 1, 0) AS `order`
#     FROM delivery
#     GROUP BY id
# ) AS subquery;



# 1=immediate
# 0=scheduled