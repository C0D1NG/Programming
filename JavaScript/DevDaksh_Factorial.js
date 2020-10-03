let num = prompt("Enter a number")

function factorial(n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

function findFactorial() {
    const num = prompt('Enter a number to find it\'s factoial');
    const fact = factorial(num);
    console.log(`The factorial of ${num} is ${fact}`)
}