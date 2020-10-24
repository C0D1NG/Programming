import 'dart:io';
//a number is said to be automorphic number if the last digits of square of the number is same as the original number"

void main() {
  var n;
  n = int.parse(stdin.readLineSync());
  var sq = square(n);
  if (sq % 100 == n)
    print("$n is an automorphic number");
  else
    print("$n is not an automorphic number");
}

square(n) {
  return n * n;
}
