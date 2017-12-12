const http = require('http');
const port = process.env.PORT || 3000;
const express = require('express');
const bodyParser = require('body-parser');


////////////////////////////////////////////////////
// Basic express configuration
////////////////////////////////////////////////////
const app = express();
app.set('views', __dirname + '/views');
app.set('view engine', 'pug');
app.use(express.static(__dirname + '/public'));
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: false }));



////////////////////////////////////////////////////
// Configure local database 
// https://github.com/louischatriot/nedb
////////////////////////////////////////////////////
const Datastore = require('nedb')
const db = new Datastore({ filename: 'games.db' });
db.loadDatabase();

// add the database to every request object 
app.use(function(req, res, next) {
    req.db = db;
    next();
})


////////////////////////////////////////////////////
// Route configuration
////////////////////////////////////////////////////
app.use("/", require("./routes/game.js"));
app.use("/history", require("./routes/history.js"));




////////////////////////////////////////////////////
// Startup
////////////////////////////////////////////////////
server = http.Server(app);
server.listen(port);