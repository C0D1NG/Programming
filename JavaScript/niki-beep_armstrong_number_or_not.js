// ? In Armstrong the sum of cubes of each digit is equal to the number itself

function armstrongOrNot(number) {
    let sum = 0;

    // create a temporary variable
    let temp = number;
    while (temp > 0) {
        // finding the one's digit
        let remainder = temp % 10;

        sum += remainder * remainder * remainder;

        // removing last digit from the number
        temp = parseInt(temp / 10); // convert float into integer
    }
    // check the condition
    if (sum == number) {
        console.log(`${number} is an Armstrong number`);
    }
    else {
        console.log(`${number} is not an Armstrong number.`);}
}

armstrongOrNot(153);