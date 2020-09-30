let rem,
    temp,
    final = 0;
let number = prompt("Enter number to check for palindrome");

temp = number;
while (number > 0) {
    rem = number % 10;
    number = parseInt(number / 10);
    final = final * 10 + rem;
}
if (final == temp) {
    console.log(`${number} is Palindrome`);
} else {
	console.log(`${number} is not Palindrome`);
}
