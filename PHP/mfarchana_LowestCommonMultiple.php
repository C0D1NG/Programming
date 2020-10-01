<?php
//https://github.com/mfarhana
function gcd( $a, $b)
{
   if ($a == 0)
    return $b;
    return gcd($b % $a, $a);
}
 
function lcm( $a, $b)
{
    return ($a / gcd($a, $b)) * $b;
}
 
//TestNumber
$a = 15; 
$b = 20;
echo "LCM of ",$a, " and ",$b, " is ", lcm($a, $b);
?>
