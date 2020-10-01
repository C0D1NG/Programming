<?php
    $binary = rand(1, 1500); //generate random binary
    $decimal = bindec(1500); //convert binary to decimal

    echo "The decimal of {$binary} is {$decimal}"
?>