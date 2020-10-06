package main

import "fmt"

var n, input int

func main() {
	fmt.Println("Enter a decimal number to get the binary result:")
	fmt.Scanln(&input)

	n = 1

	for n*2 <= input {
		n = n * 2
	}
	fmt.Println("The result is :")
	for n >= 1 {

		fmt.Print(input / n)
		input = input % n
		n = n / 2
	}
}
