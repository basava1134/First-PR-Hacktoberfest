
exports.getDate = function() {
const today = new Date();
    const options = {
        weekday: 'long', 
        month: 'long', 
        day: 'numeric'
    }
    
    const day = today.toLocaleDateString("en-IN", options);
    return day;
}

exports.getDay = function (){
    const today = new Date();
        const options = {
            weekday: 'long', 
        }
        
        const day = today.toLocaleDateString("en-IN", options);
        return day;
    }

console.log(module.exports);