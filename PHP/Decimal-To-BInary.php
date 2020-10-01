<?php

    $decimal = rand(1, 50); //generate a random number
    $binary = decbin($decimal); //converts to binary

    echo "The binary of {$decimal} is {$binary}"
?>