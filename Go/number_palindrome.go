package Go

import (
	"fmt"
	"strconv"
	"strings"
)

func isPalindrome(n int) bool {
	s := strconv.Itoa(n)
	a := strings.Split(s, "")
	j := len(a) - 1

	if len(a) == 1 {
		return true
	}

	for i := 0; i < len(a)/2; i++ {
		if a[i] != a[j] {
			return false
		}
		j--
	}
	return true
}

func main() {
	fmt.Printf("%v", isPalindrome(121))
}
