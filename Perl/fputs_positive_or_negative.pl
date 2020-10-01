#!/usr/bin/perl

use strict;
use warnings;

sub PositiveOrNegative {
	my $num = $_[0];
	if($num >= 0) {
		print $num . " is positive\n";
	} else {
		print $num . " is negative\n";
	}
}

print "Enter a number: ";
my $input = <STDIN>;
chomp $input;

PositiveOrNegative $input;
