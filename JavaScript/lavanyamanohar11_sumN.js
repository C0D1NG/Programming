function sumN(n) {
  let result = 0;
  for(let i = 1; i <= n; i++) {
    result = result + i;
  }
  return result
}

console.log(sumN(3));