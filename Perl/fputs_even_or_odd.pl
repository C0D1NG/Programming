#!/usr/bin/perl

use strict;
use warnings;

sub EvenOrOdd {
	if($_[0] % 2 == 0) {
		return "even";
	} else {
		return "odd";
	}
}

print "Enter a number: ";
my $input = <STDIN>;
chomp $input;

print $input . " is " . EvenOrOdd($input) . "\n";
