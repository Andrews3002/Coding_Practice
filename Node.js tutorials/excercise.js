const EventClass = require("events")
const event = new EventClass()

event.addListener("Event1", (arg) =>{
    console.log("Event Recieved: ",arg)
})

event.emit("Event1", {data: "message"})