<?php
function largest_in_array($array){
    if(!is_array($array)) return "Error: not an array";
    if(count($array) < 1) return "Error: array is empty";
    $largest = $array[0];
    foreach ($array as $value) {
        if($value > $largest) $largest = $value;
    }
    return $largest;
}
?>