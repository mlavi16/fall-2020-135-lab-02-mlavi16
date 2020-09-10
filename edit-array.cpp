/*
Author: Maya Lavi
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 2C

This program creates an array of 10 integers, 
and provides the user with an interface to edit any of its elements
*/

#include <iostream>

int main()
{
	int array[10];
	int index;
	int value;

	for (int i = 0; i < 10; i++) {
		array[i] = 1;
	}

	do {
		for (int i = 0; i < 10; i++){
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;


		std::cout << "Input index: ";
		std::cin >> index; //assuming input is a number

		std::cout << "Input value: ";
		std::cin >> value; //assuming input is a number

		if ((index >= 0) && (index < 10)) {
			array[index] = value;
		}

	} while ((index >= 0) && (index < 10));

	std::cout << "Index out of range. Exit." << std::endl;

	return 0;
}