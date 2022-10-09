#include <iostream>
#include "FibNumbers/FibNumbers.h"

int main(int argc, char** argv) {
	long int n = 0;

	std::cout << "Введите число: ";
	std::cin >> n;

	if (n <= 0) {
		std::cout << "Количество чисел Фибоначчи не может быть меньше или равно 0" << std::endl;
		return 1;
	}

	for (int i = 0; i < n; ++i) {
		FibNumbers fibNums(i);
		std::cout << fibNums.getFib(i) << (i < n - 1 ? " ": "\n");
	}

	return 0;
}