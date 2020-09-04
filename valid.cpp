/*
Author: Maya Lavi
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 2A

This program asks the user to input an integer in the range 0 < n < 100 and prints the number squared.
*/

#include <iostream>

int main()
{
	int num;
	std::cout << "Please enter an integer: ";
	do {
		std::cin >> num;
		if ((num > 0) && (num < 100)) {
			std::cout << "Number squared is " << (num * num) << std::endl;
		} else {
			std::cout << "Please re-enter: ";
		}
	}
	while ((num <= 0) || (num >= 100));

	return 0;
}