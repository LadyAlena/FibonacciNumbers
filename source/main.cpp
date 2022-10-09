#include <iostream>
#include "FibNumbers/FibNumbers.h"

int main(int argc, char** argv) {

	long int n = 0;

	std::cout << "Введите число: ";
	std::cin >> n;

	FibNumbers fibNums(n);

	fibNums.getQuantityFibNumbers();

	
	return 0;
}