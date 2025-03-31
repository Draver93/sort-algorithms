#include "Sort/Sort.h"

#include <chrono>

int main()
{
	std::srand(std::time(nullptr));

	const int DATA_SET_SIZE = 10000;
	std::vector<int> data_set;
	for (int i = 0; i < DATA_SET_SIZE; i++) data_set.push_back(rand() % (DATA_SET_SIZE + 1));

	//Bubble Sorting
	{
		auto start = std::chrono::high_resolution_clock::now();

		std::vector<int> data = data_set;
		sort::bubble(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Bubble sorting algorithm execution time: " << duration.count() << " milliseconds, array size: "<< DATA_SET_SIZE  << std::endl;
	}

	return 0;
}