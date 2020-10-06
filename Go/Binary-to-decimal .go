package main  
  
import (  
 "fmt"  
 "strconv"  
)  
  
func main() {  
 var binary string  
 fmt.Print("Enter Binary Number:")  
 fmt.Scanln(&binary)  
 output, err := strconv.ParseInt(binary, 2, 64)  
 if err != nil {  
  fmt.Println(err)  
  return  
 }  
  
 fmt.Printf("Output %d", output)  
  
}  
