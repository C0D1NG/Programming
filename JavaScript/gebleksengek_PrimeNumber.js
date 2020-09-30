"use strict";

const checkPrimeNumber = (number) => {
    let divisor = 0;

    for (let i = 1; i <= number; i++) {
        if (number % i === 0) {
            divisor++;
        }
    }

    if (divisor === 2) {
        console.log(`${number} is a prime pumber`);
    } else {
        console.log(`${number} is not a prime number`);
    }
};

checkPrimeNumber(2);
checkPrimeNumber(3);
checkPrimeNumber(97);
checkPrimeNumber(1920);
checkPrimeNumber(19877);
checkPrimeNumber(232);
