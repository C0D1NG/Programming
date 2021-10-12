const reverseString = (str) => {
  
    // Check input
    if(!str || str.length < 2 || 
            typeof str!== 'string') {
        return 'Not valid'; 
    }
      
    // Take empty array revArray
    const revArray = [];
    const length = str.length - 1;
      
    // Looping from the end
    for(let i = length; i >= 0; i--) {
        revArray.push(str[i]);
    }
      
    // Joining the array elements
    return revArray.join('');
}
  
console.log(reverseString("Zachy Dev"))