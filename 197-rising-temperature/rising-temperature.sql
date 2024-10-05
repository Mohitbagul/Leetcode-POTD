# Write your MySQL query statement below
select s1.id from Weather s1, Weather s2 where DATEDIFF(s1.recordDate,s2.recordDate) = 1 and
                        s1.temperature > s2.temperature
                    