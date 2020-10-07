def reverse_num(num):
  word = ""
  while num != 0:
    digit = num % 10
    word += str(digit)
    num = int(num / 10)
  return word
