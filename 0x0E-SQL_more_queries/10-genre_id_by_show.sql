-- lists all shows contained in hbtn_0d_tvshows that have at least one genre linked.
SELECT title, genre_id FROM tv_shows JOIN tv_show_genres ON tv_show_genres.show_id = tv_shows.id ORDER BY title, genre_id ASC;
