SELECT ROUND(SUM(a1.tiv_2016), 2) AS tiv_2016
FROM Insurance a1
WHERE a1.pid IN (
    SELECT t1.pid
    FROM (
       select  c1.pid 
       from Insurance c1
       where (select count(*) from Insurance c2 where c1.tiv_2015=c2.tiv_2015)>1

    ) AS t1
    JOIN (
        SELECT c1.pid
        FROM Insurance c1
        GROUP BY c1.lat, c1.lon
        HAVING COUNT(*) = 1
    ) AS t2
    ON t1.pid = t2.pid
);

