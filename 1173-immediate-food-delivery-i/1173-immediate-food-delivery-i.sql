# Write your MySQL query statement below
# count => when order date!=delivery date
# total
# count/total*100
select round((
    select count(*) from Delivery
    where order_date=customer_pref_delivery_date
)*100/count(*),2) as immediate_percentage
from Delivery