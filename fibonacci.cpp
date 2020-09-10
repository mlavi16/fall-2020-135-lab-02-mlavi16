/*
Author: Maya Lavi
Course: CSCI-135
Instructor: Zamansky
Assignment: 2D

This program uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>

int main()
{
	int fib[60];

	fib[0] = 0;
	fib[1] = 1;
 
	for (int i = 2; i < 60; i++) {
		fib[i] = fib[i-1] + fib[i-2];
	}

	for (int i = 0; i < 60; i++) {
		std::cout << fib[i] << std::endl;
	}

	/*
	Output:
			fib[45] = 1134903170
			fib[46] = 1836311903
			fib[47] = -1323752223

	As the numbers approach 2 billion, it becomes bigger than what can be represented by an integer (4 bytes).
	To fix this, you could make an array of floats, which are bigger than ints.
	*/

	return 0;
}