/*
Author: Maya Lavi
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 2B

This program calls print_interval() which prints out all integers in the range L ≤ i < U separated by spaces.
*/

#include <iostream>
#include "funcs.h"

int main()
{
	// print_interval tests
	print_interval(-5, 10); // expected output: -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9 
	print_interval(3, -6); // expected output: 
	print_interval(0, 0); // expected output: 
	print_interval(-2001, -1997); // expected output: -2001 -2000 -1999 -1998 
	print_interval(1, 8); // expected output: 1 2 3 4 5 6 7 

	return 0;
}