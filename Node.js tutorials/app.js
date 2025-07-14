const http = require('http')

const server = http.createServer()

server.addListener('Connection', function(socket){
    console.log("Connection Made....")
})

server.listen(3000)

console.log("Listening on port 3000.........")