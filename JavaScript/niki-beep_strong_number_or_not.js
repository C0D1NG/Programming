// A strong number is a number if the factorial of its digit is equal to the number itself.

function is_strong_number(num){
    sum = 0;
    r = 0;
    
    //store the entered number in a temp variable
    temp=num;
    
    //split the number and find factorial
    while(num){
        
        i=1;
        fact=1;
        
        //get one digit from
        r=num%10;
        
        //factorial script
        while(i<=r){
            fact=fact*i;
            i++;
        }
        
        //sum the factorial value
        sum=sum+fact;
        //split the next number 
        num=Math.floor(num/10);
    }
    
    //check the sum value and stored temp value
    //if same then it's a strong number or not
    if(temp == sum){
        console.log("Strong number");
    }else{
        console.log("Not a Strong number");    }
}

// Output - Not a strong Number
is_strong_number(50);
// Output - Strong Number
is_strong_number(145);