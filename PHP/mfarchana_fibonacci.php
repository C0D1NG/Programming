
<?php 
// github.com/mfarchana
  
function fib($n)  
{  
    $phi = (1 + sqrt(5)) / 2;  
    return round(pow($phi, $n) / sqrt(5));  
}  
  
// Test Number
$n = 9;  
echo fib($n) ;  
?> 
