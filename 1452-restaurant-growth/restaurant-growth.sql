SELECT t1.visited_on AS visited_on
      ,SUM(amount) AS amount
      ,ROUND(SUM(amount) / 7, 2) AS average_amount 
FROM (SELECT DISTINCT(visited_on) AS visited_on
      FROM Customer
      WHERE DATE_SUB(visited_on, INTERVAL 6 DAY) IN (SELECT DISTINCT(visited_on)
                                                     FROM Customer)) AS t1
LEFT JOIN Customer AS t2
ON t2.visited_on BETWEEN DATE_SUB(t1.visited_on, INTERVAL 6 DAY) AND t1.visited_on
GROUP BY t1.visited_on
;