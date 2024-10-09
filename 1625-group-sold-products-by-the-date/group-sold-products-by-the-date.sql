# Write your MySQL query statement below
select a1.sell_date, count(*) as num_sold ,
(select group_concat(distinct a2.product SEPARATOR ',') as products from Activities a2 where a2.sell_date=a1.sell_date) as products
from (
    select a3.sell_date,a3.product from Activities a3 group by a3.sell_date,a3.product
    ) as a1
group by a1.sell_date
order by a1.sell_date;