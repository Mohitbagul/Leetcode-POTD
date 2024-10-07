# Write your MySQL query statement below
select e.reports_to as employee_id,(select name from Employees where employee_id=e.reports_to ) as name,count(e.reports_to) as reports_count,round(avg(age),0) as average_age
from Employees e
where reports_to is not null
group by reports_to
order by e.reports_to;