package main

import "fmt"

func main() {
	var number int
	var reverse_no int = 0
	fmt.Print("Enter the number: ")
	fmt.Scan(&number)
	tmp_number := number
	for {
		remainder := tmp_number % 10
		reverse_no = reverse_no*10 + remainder
		tmp_number = tmp_number / 10
		if tmp_number == 0 {
			break
		}
	}

	if reverse_no == number {
		fmt.Printf("%d is a palindrome number", number)
	} else {
		fmt.Printf("%d is not a palindrome number", number)
	}
}
