#include "FibNumbers.h"

#include <iostream>

FibNumbers::FibNumbers(const long int number)
{
	this->number = number;

	memory.valueResult = new long int[number] {};
	memory.existenceResult = new bool[number] {};
}

FibNumbers::~FibNumbers()
{
	delete[] memory.valueResult;
	delete[] memory.existenceResult;
}

void FibNumbers::getQuantityFibNumbers()
{

	for (int i = 0; i < number; ++i) {

		std::cout << Fib(i) << (i < number - 1 ? " " : "\n");

	}

}

long int FibNumbers::Fib(long int number)
{
	long int result = 0;

	if (memory.existenceResult[number]) {
		result =  memory.valueResult[number];
	}
	else {
		if (number < 2) { result = number; }
		else { result =  Fib(number - 1) + Fib(number - 2); }

		memory.valueResult[number] = result;
		memory.existenceResult[number] = true;

	}

	return result;
}