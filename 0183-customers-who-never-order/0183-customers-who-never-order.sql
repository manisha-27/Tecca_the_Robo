# Write your MySQL query statement below
Select name as Customers from Customers C
Where C.id NOT IN (SELECT O.customerid FROM Orders O)

# SELECT name as Customers FROM Customers C
# WHERE C.Id NOT IN (SELECT O.CustomerId from Orders O)