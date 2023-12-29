# Write your MySQL query statement below
select substr(trans_date,1,7) as month, country, count(id) as trans_count, sum(if(state='approved',1,0)) as approved_count, sum(amount) as trans_total_amount, sum(if(state='approved',amount,0)) as approved_total_amount
from transactions
group by month, country;
# order by month;


# SELECT  SUBSTR(trans_date,1,7) as month, country, count(id) as trans_count, SUM(CASE WHEN state = 'approved' then 1 else 0 END) as approved_count, SUM(amount) as trans_total_amount, SUM(CASE WHEN state = 'approved' then amount else 0 END) as approved_total_amount
# FROM Transactions
# GROUP BY month, country