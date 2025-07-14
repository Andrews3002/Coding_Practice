const EventEmitter = require('events')
const emitter = new EventEmitter()

//Register a listenter
emitter.addListener('messageLogged', function(){
    console.log("Listener called")
})

//Raise an event
emitter.emit('messageLogged')

