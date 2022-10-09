#pragma once
class FibNumbers
{
public:
	FibNumbers(const long int number);
	~FibNumbers();
	void getQuantityFibNumbers();

private:

	long int number;

	long int Fib(long int number);

	class Memory {
	public:
		long int* valueResult;
		bool* existenceResult;
	};

	Memory memory;
};