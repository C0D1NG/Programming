package main

import "fmt"

func isPerfectNumber(n int) bool {
	sum := 0
	limit := n / 2

	for i := 1; i <= limit; i++ {
		if n%i == 0 {
			sum += i
		}
	}
	return sum == n && n != 0
}

func main() {
	fmt.Printf("Result %v", isPerfectNumber(6))
}
