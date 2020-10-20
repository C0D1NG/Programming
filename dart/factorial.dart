import 'dart:io';

//Factorial of a number n=n*n-1*n-2*n-3*.....*2*1
void main() {
  var num, s = 1, i;
  num = int.parse(stdin.readLineSync());
  //print("$num");
  //print("hello");
  for (i = 1; i <= num; i++) {
    s *= i;
  }
  print("$s");
}
