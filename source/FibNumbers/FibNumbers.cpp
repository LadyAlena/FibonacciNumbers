#include "FibNumbers.h"

#include <iostream>

void FibNumbers::getQuantityFibNumbers(const int number)
{
	for (int i = 0; i < number; ++i) {
		std::cout << Fib(i) << (i < number - 1 ? " " : "\n");
	}
}

int FibNumbers::Fib(const int number)
{
	if (number < 2) { return number; }
	else { return Fib(number - 1) + Fib(number - 2); }
}