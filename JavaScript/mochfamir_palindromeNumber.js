function palindromeNumber(input = 1) {
 let inputInString = input.toString();
 for (let i = 0; i < Math.floor(inputInString.length / 2); i++) {
  if (inputInString[i] !== inputInString[inputInString.length - 1 -i]) {
    return false
  }
 }
 return true
}

console.log(palindromeNumber(3003))