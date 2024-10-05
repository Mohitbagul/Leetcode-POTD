# Write your MySQL query statement below
select Signups.user_id,round((count(case when Confirmations.action="confirmed" then 1 end)/count(*)),2) as confirmation_rate from Signups left join Confirmations on
                    Signups.user_id = Confirmations.user_id
                    group by user_id;