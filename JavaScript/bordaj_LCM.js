let lcm = (n1=process.argv[2], n2=process.argv[3]) => {

   let lar = Math.max(n1, n2);
   let small = Math.min(n1, n2);
 
   let i = lar;
   while(i % small !== 0){
     i += lar;
   }
   
   return i;
 }
 
 console.log(`LCM of ${process.argv[2]} and ${process.argv[3]} is `+lcm())