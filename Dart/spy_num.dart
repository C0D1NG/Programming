import 'dart:io';

//a number is said to be spy number  if the sum of digits of number is equal to the product of the digits od number
void main() {
  var n, s = 0, p = 1, d, n1;
  n = int.parse(stdin.readLineSync());
  n1 = n;

  while (n > 0) {
    d = n % 10;
    s += d;
    p *= d;
    n = (n / 10).floor();
  }
  if (s == p)
    print("$n1 is spy number");
  else
    print("$n1 is not a spy number");
}
