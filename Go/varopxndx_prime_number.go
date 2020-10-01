package main

import "fmt"

func isPrimeNumber(n int) bool {
	return n%2 == 0
}

func main() {
	number := 3
	fmt.Printf("Result %v", isPrimeNumber(number))
}
