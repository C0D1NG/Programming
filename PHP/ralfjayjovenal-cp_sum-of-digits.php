<?php

    $numbers = rand(1, 999); //generate a random number from 1-999
    $sum = array_sum(str_split($numbers)); //convert the number into array values then added them.

    echo "The sum of {$numbers} is {$sum}";
?>