#!/usr/bin/perl

use strict;
use warnings;

sub BinaryToDecimal {

	my $num = $_[0];
	my $decimal = 0;
	my $base = 1;

	my $temp = $num;
	while($temp > 0) {
		my $last_digit = $temp % 10;
		$temp = $temp / 10;

		$decimal += $last_digit * $base;
		$base = $base * 2;
	}

	return $decimal;
}

print "Enter a binary number: ";
my $input = <STDIN>;
chomp $input;

print $input . " in decimal is " . BinaryToDecimal($input) . "\n";
