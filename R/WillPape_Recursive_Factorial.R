# Recursive Factorial

Factorial = function (Num){
  if (Num == 1){return (Num)}
  return (Num * Fact_Rec(Num-1))
}