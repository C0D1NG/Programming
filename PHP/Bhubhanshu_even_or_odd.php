<?php
    echo "Enter any number: ";
    $input = intval(fgets(STDIN));
    echo "The number " . $input . " is " . (($input % 2) ? "odd " : "even ") ;
?>