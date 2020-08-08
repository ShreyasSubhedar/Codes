package main

import "fmt"

func isPrime(No int) string {
	if No == 1 {
		return "no"
	}
	for i := 2; i*i <= No; i++ {
		if No%i == 0 {
			return "no"
		}
	}
	return "yes"
}
func main() {
	// your code goes here
	var T int
	fmt.Scan(&T)
	var No int
	for i := 0; i < T; i++ {
		fmt.Scan(&No)
		fmt.Println(isPrime(No))
	}
}
