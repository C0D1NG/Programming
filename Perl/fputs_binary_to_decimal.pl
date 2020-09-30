#!/usr/bin/perl

sub BinaryToDecimal {

	$num = $_[0];
	$decimal = 0;
	$base = 1;

	$temp = $num;
	while($temp > 0) {
		$last_digit = $temp % 10;
		$temp = $temp / 10;

		$decimal += $last_digit * $base;
		$base = $base * 2;
	}

	return $decimal;
}

print BinaryToDecimal(10101001);
