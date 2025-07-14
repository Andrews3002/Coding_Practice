const EventClass = require('events')

var url = "example.com"

class Logger extends EventClass{
    log(message){
        console.log(message)

        this.emit('Connection', {id:1, sex:'male'})
    }    
}

module.exports = Logger





