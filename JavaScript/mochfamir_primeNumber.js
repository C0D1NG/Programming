function checkPrimeNumber(input) {
  let factor = 0;
  for (let i = 0; i <= input; i++) {
    if (input % i === 0) {
      factor++
    }
  }
  
  return factor === 2 ? true : false
}

console.log(checkPrimeNumber(2));
console.log(checkPrimeNumber(3));
console.log(checkPrimeNumber(4));
console.log(checkPrimeNumber(5));
console.log(checkPrimeNumber(6));
console.log(checkPrimeNumber(7));
console.log(checkPrimeNumber(8));
console.log(checkPrimeNumber(9));
console.log(checkPrimeNumber(10));
console.log(checkPrimeNumber(11));


