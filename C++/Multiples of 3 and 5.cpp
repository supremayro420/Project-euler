#include <iostream>
#include <vector>

int main()
{
	std::vector<int> mainvec;
	long int sum = 0;
	for (int i = 0; i < 1000; i++) // generate the numbers inside vector
	{
		mainvec.push_back(i);
	}
	for (int i = 0; i < mainvec.size(); i++) // check for fizzbuzz
	{
		if (i % 3 == 0 && !i % 5 == 0) {
			/*mainvec[i] = 99999993;*/
			sum += i;
		}
		else if (i % 3 == 0)
		{
			/*mainvec[i] = 99999991;*/
			sum += i;
		}
		else if (i % 5 == 0)
		{
			/*mainvec[i] = 99999992;*/
			sum += i;
		}
	}
	printf("Sum of these:: %li\n", sum); // result is 233168
	return EXIT_SUCCESS;
}
