import 'dart:io';

//a number is said to be prime if it is divisible by 1 and that number itself
void main() {
  var n, i, c = 0;
  n = int.parse(stdin.readLineSync());
  for (i = 1; i <= n; i++) {
    if (i % 2 == 0) c += 1;
  }
  if (c == 2)
    print('$n is Prime');
  else
    print('$n is not prime');
}
