# Write your MySQL query statement below
select e1.employee_id as employee_id, case when count(e1.employee_id) = 1 then e1.department_id else (select e2.department_id from Employee e2 where e2.employee_id = e1.employee_id and e2.primary_flag = "Y" ) end as department_id
from Employee e1
group by e1.employee_id;