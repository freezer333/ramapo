//https://github.com/mikeleguedes/json-movie-list
const data_source = `/home/sfrees/Desktop/json-movie-list-master/movies`;
const path = require('path');
const fs = require('fs');
const output = path.join(data_source, "movies.sql");
const sql_commands = [`CREATE TABLE Movies (
	title VARCHAR(50), 
	year INT, 
 	length INT, 
	genre VARCHAR(50) );`]


const files = fs.readdirSync(data_source);
for ( const year of files) {
    const year_folder = path.join(data_source, year);
    const movies = fs.readdirSync(year_folder);
    for ( const movie_json of movies) {
        const movie = require(path.join(year_folder, movie_json));
        if ( movie.runtime && movie.categories && movie.categories.length > 0) {
        const sql = `INSERT INTO Movies (title, year, genre, length) VALUES ("${movie.name}", ${movie.year}, "${movie.categories[0].toLowerCase()}", ${movie.runtime});`;
        sql_commands.push(sql);
        }
    }
}
    

    const s = fs.createWriteStream('movies-1.sql');
    for ( const sql of sql_commands) {
        console.log(sql);
        s.write(sql + "\n");
    }
    s.close();
