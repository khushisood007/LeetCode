# Write your MySQL query statement below
select e.name as Employee
from Employee as e
join Employee as m
on e.managerId=m.Id
where e.salary>m.salary;