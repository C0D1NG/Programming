function decimalConverter(dec = process.argv[2]) {
   return (dec >>> 0).toString(2);
};
console.log(process.argv[2], '->',decimalConverter())