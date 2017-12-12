var express = require('express');
var router = express.Router();
module.exports = router;


router.get("/", function(req, res) {
    res.render('history', {});
});

router.get("/games", function(req, res) {
    req.db.find({ complete: true }, function(err, games) {
        res.setHeader('Content-Type', 'application/json');
        res.end(JSON.stringify({
            games: games
        }))
    });
});