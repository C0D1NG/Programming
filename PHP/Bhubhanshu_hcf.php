<?php
    echo "Enter two space separated numbers: ";
    fscanf(STDIN, "%d %d", $a, $b); 
    function hcf($a, $b){
        return $b==0 ? $a : hcf($b, $a % $b);
    }

    if($a < $b){
        $temp = $a;
        $a = $b;
        $b = $temp;
    }

    echo "Highest Common Factor of " . $a ." and ". $b ." is ". hcf($a, $b);
?>