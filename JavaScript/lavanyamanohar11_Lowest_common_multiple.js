let lcm = (n1, n2) => {
  //Find the smallest and biggest number from both the numbers
  let lar = Math.max(n1, n2);
  let small = Math.min(n1, n2);
  
  //Loop till you find a number by adding the largest number which is divisble by the smallest number
  let i = lar;
  while(i % small !== 0){
    i += lar;
  }
  
  //return the number
  return i;
}

let n1 = prompt('Enter number 1');
let n2 = prompt('Enter number 2');
console.log(`LCM of ${n1} and ${n2} is `+lcm(n1,n2));