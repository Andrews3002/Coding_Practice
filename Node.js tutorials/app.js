const Logger = require('./logger')
const logger = new Logger()

logger.addListener('Connection', function(arg){
    console.log("Listener Called", arg)
})

logger.log("message")