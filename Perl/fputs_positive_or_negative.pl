#!/usr/bin/perl

use strict;
use warnings;

sub PositiveOrNegative {
	if($_[0] >= 0) {
		return "positive";
	} else {
		return "negative"
	}
}

print "Enter a number: ";
my $input = <STDIN>;
chomp $input;

print $input . " is " . PositiveOrNegative($input) . "\n";
