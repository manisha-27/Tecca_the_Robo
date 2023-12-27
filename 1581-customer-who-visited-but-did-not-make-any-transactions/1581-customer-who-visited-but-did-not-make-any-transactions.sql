# Write your MySQL query statement below
# SELECT a.customer_id FROM Visits as a
# left JOIN Transactions as b
# ON a.visit_id!=b.visit_id
# WHERE b.visit_id IS NULL;

select v.customer_id, count(v.customer_id) count_no_trans
from visits  v left join transactions t on v.visit_id=t.visit_id
where transaction_id is null
group by v.customer_id
