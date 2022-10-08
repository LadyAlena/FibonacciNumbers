#pragma once
class FibNumbers
{
public:
	void getQuantityFibNumbers(long int number);

private:
	long int Fib(long int number);

	class Memory {
	public:
		long int* value;
		bool* result;
	};

	Memory memory;
};