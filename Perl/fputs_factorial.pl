#!/usr/bin/perl

use strict;
use warnings;

sub Factorial {
	my $n = $_[0];
	
	if($n == 1) {
		return $n;
	} else {
		return $n * Factorial($n - 1);
	}
}

print "Enter a number: ";
my $input = <STDIN>;
chomp $input;

print $input . "! = " . Factorial($input) . "\n";
