-- displays the top 3 of cities temperature during July and August ordered by temperature desc
USE hbtn_0c_0;
SELECT city, AVG(value) AS avg_temp FROM temperatures WHERE month = 7 OR month = 8 GROUP BY city ORDER BY avg_temp DESC limit 3;
