#include "Sort/Sort.h"

#include <chrono>
#include <cassert>


int main()
{
	std::srand(std::time(nullptr));

	const int DATA_SET_SIZE = 10000;
	std::vector<int> data_set, sorted_data_set;
	for (int i = 0; i < DATA_SET_SIZE; i++) data_set.push_back(rand() % (DATA_SET_SIZE + 1));


	//Bubble Sorting
	{
		auto start = std::chrono::high_resolution_clock::now();

		std::vector<int> data = data_set;
		sort::bubble(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Bubble sorting algorithm execution time: " << duration.count() << " milliseconds, array size: "<< DATA_SET_SIZE  << std::endl;

		sorted_data_set = data;
	}

	//Insertion Sorting
	{
		auto start = std::chrono::high_resolution_clock::now();

		std::vector<int> data = data_set;
		sort::insertion_type1(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Insertion(with erase insert) sorting algorithm execution time: " << duration.count() << " milliseconds, array size: " << DATA_SET_SIZE << std::endl;

		assert(std::equal(data.begin(), data.end(), sorted_data_set.begin()));
	}

	{
		auto start = std::chrono::high_resolution_clock::now();

		std::vector<int> data = data_set;
		sort::insertion_type2(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Insertion(with shifting) sorting algorithm execution time: " << duration.count() << " milliseconds, array size: " << DATA_SET_SIZE << std::endl;

		assert(std::equal(data.begin(), data.end(), sorted_data_set.begin()));
	}

	return 0;
}