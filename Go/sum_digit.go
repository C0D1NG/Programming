package main

import (
	"fmt"
	"strconv"
	"strings"
)

func sumDigitsNumber(n int) int {
	s := strconv.Itoa(n)
	a := strings.Split(s, "")
	sum := 0
	for i := 0; i < len(a); i++ {
		temp, _ := strconv.Atoi(a[i])
		sum += temp
	}
	return sum
}

func main() {
	fmt.Print(sumDigitsNumber(12345))
}
