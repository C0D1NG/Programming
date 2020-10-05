package main

import "fmt"

func numberHandshake(x int) int {
	return (x * (x-1))/2
}

func main() {
	var x int
	fmt.Print("Enter a number: ") 
    fmt.Scan(&x)
    fmt.Println("Number of maximum handshake : ", numberHandshake(x))
}