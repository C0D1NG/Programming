package main

import (
	"fmt"
)

func main() {
	n := 4
	sum := 0
	
	for i:=1; i<=n; i++ {
		sum += i
	}
	fmt.Print(sum)
}