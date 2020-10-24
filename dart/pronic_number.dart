import 'dart:io';

//a number is said to be pronic number if it can be obtained by the product of 2 consecutive integers
void main() {
  var n, i, s = 0;
  n = int.parse(stdin.readLineSync());
  for (i = 1; i <= n / 2; i++) {
    if (i * (i + 1) == n) {
      s = 1;
      break;
    }
  }
  if (s == 1)
    print("$n is a pronic number");
  else
    print("$n is not a pronic number");
}
