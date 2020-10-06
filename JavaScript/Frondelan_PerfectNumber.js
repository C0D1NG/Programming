let inpNum = prompt(
  "Ingresa un número entero positivo/ Enter a positive integer."
);
function isPerfectNumber(numVal) {
  var sum = 0;
  for (var i = 1; i < numVal; i++) {
    if (numVal % i == 0) {
      sum += i;
    }
  }
  if (sum == numVal) {
    return `El número: ${numVal} es perfecto / The number: ${numVal} is perfect.`;
  }
  return `El número: ${numVal} no perfecto/ The number: ${numVal} is not perfect.`;
}
console.log(isPerfectNumber(inpNum));
