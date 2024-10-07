select distinct id, count(distinct friend) as num
from
(select requester_id as id, accepter_id as friend
from requestaccepted
union
select accepter_id as id, requester_id as friend
from requestaccepted) t
group by id
order by num desc limit 1