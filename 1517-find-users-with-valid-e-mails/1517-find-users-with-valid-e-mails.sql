# Write your MySQL query statement below
select * from Users
where mail REGEXP '^[a-z A-Z][a-z A-Z 0-9 _\.\-\]*@leetcode\\.com';