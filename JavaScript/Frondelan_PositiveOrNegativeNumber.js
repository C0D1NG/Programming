let inpNum = prompt(
  "Ingresa un número entero positivo/ Enter a positive integer."
);

function numberValidation(numVal) {
  if (numVal == 0) {
    return `El número: ${numVal} es neutro / The number: ${numVal} is neutral.`;
  } else if (numVal > 0) {
    return `El número: ${numVal} es positivo / The number: ${numVal} is positive.`;
  }
  return `El número: ${numVal} es negativo/ The number: ${numVal} is negative.`;
}

console.log(numberValidation(inpNum));
