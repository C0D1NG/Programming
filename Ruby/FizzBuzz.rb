# Write a program that prints the numbers from 1 to 100. 
# But for multiples of three print "Fizz" instead of the number 
# and for the multiples of five print "Buzz". 
# For numbers which are multiples of both three and five print "FizzBuzz".

# Tip: % (modulo) tells you what's left over when you 
# divide one number by another.
# ex. number % 3 == 0

(1..100).each do |number|
  if (number % 3 == 0) && (number % 5 == 0)
    puts "FizzBuzz"
  elsif number % 3 == 0
    puts "Fizz"
  elsif number % 5 == 0
    puts "Buzz"
  else
    puts number
  end
end
