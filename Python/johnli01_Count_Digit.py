def count_digit(num):
  total = 0
  if num < 0:
    num = num * -1
  while num > 0:
    total += num % 10
    num = num // 10
  return total