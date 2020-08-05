package main

import "fmt"

// M matrix
var M [2][2]int64

// I Matrix
var I [2][2]int64

func mul(A [2][2]int64, B [2][2]int64) {
	var res [2][2]int64
	for i := 0; i < 2; i++ {
		for j := 0; j < 2; j++ {
			//fmt.Println(A[i][j])
			res[i][j] = 0
			for k := 0; k < 2; k++ {
				res[i][j] += (A[i][k] * B[k][j]) % 1000000007
			}
		}
	}
	for i := 0; i < 2; i++ {
		for j := 0; j < 2; j++ {
			A[i][j] = res[i][j]
		}
	}
}

func calFunc(No int64) int64 {
	if No <= 2 {
		return No
	}
	// TODO : Matrix Exponentiation
	M = [2][2]int64{{0, 1}, {1, 1}}
	I = [2][2]int64{{1, 0}, {0, 1}}
	No--
	for No > 0 {
		if No%2 == 1 {
			mul(I, M)
			No--

		}
		if No%2 == 0 {
			mul(M, M)
			No /= 2
		}
	}
	var Fn int64
	Fn = (1*I[0][0] + 2*I[1][0]) % 1000000007
	return Fn

}

func main() {

	var T int
	fmt.Scan(&T)
	for i := 0; i < T; i++ {
		var No int64
		fmt.Scan(&No)
		fmt.Println(calFunc(No))

	}
}
