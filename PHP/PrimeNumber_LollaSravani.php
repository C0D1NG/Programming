<?php
echo "Enter a number: ";
$number = intval(fgets(STDIN));
for ($iter = 2; $iter <= $number-1; $iter++) {  
    if ($number % $iter == 0)  
       $isNotPrime = True;
}
if (isset($isNotPrime) && $isNotPrime) {  
     echo $number . ' is not prime';  
}  else {  
   echo $number . ' is prime';  
   } 

?>