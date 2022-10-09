#pragma once
class FibNumbers
{
public:
	FibNumbers(const long int number);
	~FibNumbers();

	long int getFib(long int number);

private:

	long int number;

	class Memory {
	public:
		long int* valueResult;
		bool* existenceResult;
	};

	Memory memory;
};