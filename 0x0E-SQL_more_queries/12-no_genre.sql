-- lists all shows contained in hbtn_0d_tvshows
SELECT title, genre_id FROM tv_shows LEFT JOIN tv_show_genres ON tv_show_genres.show_id = tv_shows.id WHERE genre_id = NULL ORDER BY title ASC;
