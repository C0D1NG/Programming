function reverseNumber(input) {
  return parseInt(input.toString().split('').reverse().join(''))
}

console.log(reverseNumber(123))