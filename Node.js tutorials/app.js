const EventEmitter = require('events')
const emitter = new EventEmitter()

//Register a listenter with addListener and on, 2 interchangeable functions
emitter.addListener('messageLogged', function(){
    console.log("Listener called")
})
emitter.addListener('messageLogged', function(){
    console.log("Listener called")
})

//Raise an event
emitter.emit('messageLogged')

