import 'dart:io';
import 'dart:math';

void main() {
  var n;
  n = int.parse(stdin.readLineSync());
  var d;
  var p = 0;
  var n1 = n;
  var n2 = n;
  var res = 0;
  while (n > 0) {
    d = n % 10;
    p = p + 1;
    n = (n / 10).floor();
  }
  while (n2 > 0) {
    d = n2 % 10;
    res = res + pow(d, p);
    n2 = (n2 / 10).floor();
  }
  if (res == n1)
    print("$n1 is an armstrong number");
  else
    print("$n1 is not an armstrong number");
}
