const fs = require('fs')

fs.readdir('./jojo', function(err, files){
    console.log("Error", err)
    console.log("Files", files)
})

var message = "Hello World"
console.log("Message:", message, "I'm Alex")