const EventEmitter = require('events')
const emitter = new EventEmitter()

//Register a listenter with addListener and on, 2 interchangeable functions
emitter.addListener('messageLogged', function(arg){
    console.log("Listener called", arg)
})
emitter.addListener('messageLogged', function(arg){
    console.log("Listener called", arg)
})
emitter.addListener('messageLogged', (arg) => {
    console.log("Listener called", arg)
})


//Raise an event
emitter.emit('messageLogged', {data:"message"})

