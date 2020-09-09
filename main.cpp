/*
Author: Maya Lavi
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 2B

This program asks the user to input two integers L and U, 
and prints out all integers in the range L ≤ i < U separated by spaces.
*/

#include <iostream>
#include "funcs.h"

int main()
{
	// print_interval tests
	print_interval(-5, 10); 
	print_interval(-5, -6);
	print_interval(0, 0);
	print_interval(-21, 1);
	print_interval(1, 8);

	return 0;
}