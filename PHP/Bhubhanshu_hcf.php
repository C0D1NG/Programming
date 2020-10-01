<?php
    echo "Enter two space separated numbers: ";
    fscanf(STDIN, "%d %d", $a, $b); 
    function hcf($a, $b){
        return $b==0 ? $a : hcf($b, $a % $b);
    }

    echo "Highest Common Factor of " . $a ." and ". $b ." is ". hcf($a, $b);
?>
