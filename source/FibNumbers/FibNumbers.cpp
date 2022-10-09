#include "FibNumbers.h"

#include <iostream>

FibNumbers::FibNumbers(const long int number)
{
	this->number = number;
	memory.valueResult = new long int[number + 1] {};
	memory.existenceResult = new bool[number + 1] {};
}

FibNumbers::~FibNumbers()
{
	delete[] memory.valueResult;
	delete[] memory.existenceResult;
}

long int FibNumbers::getFib(long int number)
{
	long int result = 0;

	if (memory.existenceResult[number]) {
		result =  memory.valueResult[number];
	}
	else {
		if (number < 2) { result = number; }
		else { result =  getFib(number - 1) + getFib(number - 2); }

		memory.valueResult[number] = result;
		memory.existenceResult[number] = true;

	}

	return result;
}