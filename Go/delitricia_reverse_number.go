package main

import (
	"fmt"
	"strconv"
)

func main() {
	n := 4567
	s:= strconv.Itoa(n)
	temp := ""
	
	for _, number := range s {
		temp = string(number) + temp
	}
	
	result, _ := strconv.Atoi(temp)
	fmt.Print(result)
}