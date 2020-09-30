#!/usr/bin/perl

sub EvenOrOdd {

	if($_[0] % 2 == 0) {
		print($_[0] . " is Even\n");
	} else {
		print($_[0] . " is Odd\n");
	}
}

EvenOrOdd(4);
EvenOrOdd(3);
