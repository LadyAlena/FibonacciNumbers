#include <iostream>
#include "FibNumbers/FibNumbers.h"

int main(int argc, char** argv) {

	FibNumbers fibNum;

	long int n = 0;

	std::cout << "Введите число: ";
	std::cin >> n;

	fibNum.getQuantityFibNumbers(n);

	
	return 0;
}