package main

import (
	"fmt"
)

func sumDigits(number int) int {
	remainder := 0
	sumResult := 0
	for number != 0 {
		remainder = number % 10
		sumResult += remainder
		number = number / 10
	}
	return sumResult
}
func main() {
	var number int
	fmt.Print("Enter a number:")
	fmt.Scanln(&number)
	fmt.Printf("The addition of %d = %d\n", number, sumDigits(number))

}
