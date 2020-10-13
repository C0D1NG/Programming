# Iterative Factorial

Factorial = function (Num){
  N = Num
  while (N != 1){
    N = N-1
    Num = Num*N
  }
  return (Num)
}