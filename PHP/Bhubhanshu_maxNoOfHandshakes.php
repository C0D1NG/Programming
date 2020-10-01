<?php
    echo "Enter N, the total number of people: ";
    $input = intval(fgets(STDIN));
    echo "The maximum number of handshakes is " . ($input * ($input-1))/2 ;
?>