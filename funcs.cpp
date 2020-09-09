/*
This program asks the user to input two integers L and U, 
and prints out all integers in the range L ≤ i < U separated by spaces.
*/

#include <iostream>


void print_interval(int L, int U) {
	for (int i = L; i < U; i++) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}