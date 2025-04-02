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
		// Result: Bubble sorting algorithm execution time: 1579 milliseconds, array size: 10000

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
		// Result: Insertion(with erase insert) sorting algorithm execution time: 130 milliseconds, array size: 10000

		assert(std::equal(data.begin(), data.end(), sorted_data_set.begin()));
	}

	//Insertion Sorting 
	{
		auto start = std::chrono::high_resolution_clock::now();

		std::vector<int> data = data_set;
		sort::insertion_type2(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Insertion(with shifting) sorting algorithm execution time: " << duration.count() << " milliseconds, array size: " << DATA_SET_SIZE << std::endl;
		// Result: Insertion(with shifting) sorting algorithm execution time: 280 milliseconds, array size: 10000

		assert(std::equal(data.begin(), data.end(), sorted_data_set.begin()));
	}


	//Selection Sorting 
	{
		auto start = std::chrono::high_resolution_clock::now();

		std::vector<int> data = data_set;
		sort::selection(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Selection sorting algorithm execution time: " << duration.count() << " milliseconds, array size: " << DATA_SET_SIZE << std::endl;
		// Result: Selection sorting algorithm execution time: 554 milliseconds, array size: 10000

		assert(std::equal(data.begin(), data.end(), sorted_data_set.begin()));
	}
	return 0;
}