function binaryToDecimal(num=process.argv[2]) {
   const converted = parseInt(num, 2);
   return converted;
}
console.log(process.argv[2],'->',binaryToDecimal())