#!/bin/bash
num=$1;
dec2bin()
{
    op=2; ## Since we're converting to binary
    quo=$(( $num/ $op)); ## quotient
    rem=$(( $num% $op)); ## remainder
    array=(); ## array for putting remainder inside array
    array+=("$rem"); ## array expansion
        until [[ $quo -eq 0 ]]; do
            num=$quo; ## looping to get all remainder, untill the remainder is 0
            quo=$(( $num / $op));
            rem=$(( $num % $op));
            array+="$rem"; ## array expansion
        done
    binary=$(echo "${array[@]}" | rev); ## reversing array
    printf "$binary\n"; ## print array
}
main()
{
[[ -n ${num//[0-9]/} ]] &&
    { printf "$num is not an integer bruv!\n"; return 1;
    } || { dec2bin $num; }
}
main;
