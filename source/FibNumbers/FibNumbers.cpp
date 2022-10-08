#include "FibNumbers.h"

#include <iostream>

void FibNumbers::getQuantityFibNumbers(long int number)
{
	memory.value = new long int[number] {};
	memory.result = new bool[number] {};

	for (int i = 0; i < number; ++i) {

		std::cout << Fib(i) << (i < number - 1 ? " " : "\n");

	}

	delete[] memory.value;
	delete[] memory.result;
}

long int FibNumbers::Fib(long int number)
{
	long int result = 0;

	if (memory.result[number]) {
		return memory.value[number];
	}
	else {
		if (number < 2) { result = number; }
		else { result =  Fib(number - 1) + Fib(number - 2); }

		memory.value[number] = result;
		memory.result[number] = true;

	}

	return result;
}