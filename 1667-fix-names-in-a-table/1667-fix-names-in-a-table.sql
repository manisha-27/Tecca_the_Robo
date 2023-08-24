# Write your MySQL query statement below
select U.user_id,  concat(UPPER(Substring(U.name,1,1)),LOWER(Substring(U.name,2))) as name
FROM Users U order by user_id ASC;