function decimalToBinary(decimalNum) {
  let binaryDigits = [];
  while (decimalNum > 0) {
    binaryDigits.unshift(decimalNum % 2);
    decimalNum = Math.floor(decimalNum / 2);
  }
  return binaryDigits.join("");
}
