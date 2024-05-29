-- to list all genres not linked to the show Dexter
 SELECT name
 FROM tv_shows LEFT JOIN tv_show_genres ON tv_shows.id = tv_show_genres.show_id 
 LEFT JOIN tv_genres ON tv_genres.id = tv_show_genres.genre_id
 WHERE title IS NOT "Dexter"
 ORDER BY name ASC;                            
