#include <iostream>

template <typename T>
T getMax(T array[], const int size);

int main()
{

	const int SIZE = 5;
	int integers[SIZE] = { 1, 2, 3, 4, 3 };
	char characters[SIZE] = { 'a', 'b', 'c', 'b', 'b' };
	double doubles[SIZE] = { 5.4, 6.3, 8.8, 8.9, 7.5 };

	std::cout << "The max of the integers is " << getMax(integers, SIZE) << "\n";
	std::cout << "The max of the characters is " << getMax(characters, SIZE) << "\n";
	std::cout << "The max of the doubles is " << getMax(doubles, SIZE) << "\n";

	return 0;
}

template <typename T>
T getMax(T array[], const int size)
{
	if (size == 1)
		return array[0];

	T max = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}