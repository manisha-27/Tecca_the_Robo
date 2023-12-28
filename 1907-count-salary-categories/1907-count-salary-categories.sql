# Write your MySQL query statement below
select 'Low Salary' category, count(income) accounts_count
from accounts
where income<20000
union
select 'Average Salary' category, count(income) accounts_count
from accounts
where income>=20000 and income<=50000
union
select 'High Salary' category, count(income) accounts_count
from accounts
where income>50000







# SELECT 
#     'Low Salary' AS category,
#     SUM(income < 20000) AS accounts_count
# FROM 
#     Accounts

# UNION 

#     SELECT 
#         'Average Salary' AS category,
#         SUM(income BETWEEN 20000 AND 50000 ) AS accounts_count
#     FROM 
#         Accounts

# UNION

#     SELECT 
#         'High Salary' AS category,
#         SUM(income > 50000) AS accounts_count
#     FROM 
#         Accounts;