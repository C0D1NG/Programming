const isLeap = (year) => {
    let result;

    
    if (year % 4 === 0) {
        if (year % 100 === 0) {
            // if the year is divisible by 100 AND by 400
            if (year % 400 === 0) {
                result = "A leap year";
            }
            else result = "Not a leap year";
        }
        else result = "A leap year";
    }
    else result = "Not a leap year";

    return result;
}

console.log(isLeap(1952));