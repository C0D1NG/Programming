//how to run this file.

// 1. save this file as html file
// 2. encapsulate whole program in script tag 
// 3. open in browser
// 4. view output in the console 
// or just open in node and remove prompt function.

    // program to convert decimal to binary
function convertToBinary(x) {
    let bin = 0;
    let rem, i = 1, step = 1;
    while (x != 0) {
        rem = x % 2;
        console.log(
            `Step ${step++}: ${x}/2, Remainder = ${rem}, Quotient = ${parseInt(x/2)}`
            );
        x = parseInt(x / 2);
        bin = bin + rem * i;
        i = i * 10;
    }
    console.log(`Binary: ${bin}`);
}

// take input
let number = prompt('Enter a decimal number: '); 

convertToBinary(number);
