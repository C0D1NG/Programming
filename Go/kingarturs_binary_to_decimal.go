package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n string
	fmt.Print("Enter a binary number: ")
	fmt.Scanln(&n)
	decimal, err := strconv.ParseInt(n, 2, 64)
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Printf("Decimal: %d", decimal)
}
