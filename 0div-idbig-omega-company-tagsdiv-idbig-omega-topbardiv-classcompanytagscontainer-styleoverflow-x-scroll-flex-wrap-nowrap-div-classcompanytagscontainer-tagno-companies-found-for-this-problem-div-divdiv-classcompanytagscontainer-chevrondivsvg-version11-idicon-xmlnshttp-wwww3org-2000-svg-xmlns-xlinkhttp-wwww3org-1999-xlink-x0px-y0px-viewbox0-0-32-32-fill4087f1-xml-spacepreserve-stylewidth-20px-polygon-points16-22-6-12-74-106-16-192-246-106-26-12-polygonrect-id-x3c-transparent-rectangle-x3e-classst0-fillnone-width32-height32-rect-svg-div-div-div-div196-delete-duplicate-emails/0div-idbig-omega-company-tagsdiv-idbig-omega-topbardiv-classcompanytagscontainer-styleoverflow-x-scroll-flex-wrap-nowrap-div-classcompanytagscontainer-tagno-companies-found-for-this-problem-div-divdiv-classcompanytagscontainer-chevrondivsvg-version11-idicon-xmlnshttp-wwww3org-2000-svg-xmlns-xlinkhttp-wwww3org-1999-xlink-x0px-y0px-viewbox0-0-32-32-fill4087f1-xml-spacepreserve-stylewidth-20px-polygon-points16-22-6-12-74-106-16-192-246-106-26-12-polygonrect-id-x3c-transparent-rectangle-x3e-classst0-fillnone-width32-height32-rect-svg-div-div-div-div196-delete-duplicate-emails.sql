# Write your MySQL query statement below
# delete from person where id not in (select id from person group by email order by id desc limit (select count(*) from person)-1);

# delete p1 from person p1, person p2
# where p1.email=p2.email and p1.id>p2.id

# DELETE person FROM person
# WHERE id NOT IN (select id from person order by id limit 1);

delete from person where id not in (select t.id from (select min(id) as id from person group by email) as t); 
