#include <iostream>
#include "FibNumbers/FibNumbers.h"

int main(int argc, char** argv) {

	long int n = 0;

	std::cout << "Введите число: ";
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		
		FibNumbers fibNums(i);
		std::cout << fibNums.getFib(i) << (i < n - 1 ? " ": "\n");

	}

	return 0;
}