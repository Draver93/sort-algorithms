#include "Sort/Sort.h"

#include <chrono>
#include <cassert>
#include <algorithm>


int main()
{
	std::srand(std::time(nullptr));

	std::array<int, DATA_SET_SIZE> data_set, sorted_data_set;

	for (int i = 0; i < data_set.size(); i++) data_set[i] = (rand() % (DATA_SET_SIZE + 1));


	//Bubble Sorting
	{
		std::array<int, DATA_SET_SIZE> data = data_set;

		auto start = std::chrono::high_resolution_clock::now();

		sort::bubble(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Bubble sorting algorithm execution time[" << data[0] << "]: "<< duration.count() << " milliseconds, array size: "<< DATA_SET_SIZE  << std::endl;
		// Result: Bubble sorting algorithm execution time[0]: 12489 milliseconds, array size: 100000

		sorted_data_set = data;
	}

	//Insertion Sorting 
	{
		std::array<int, DATA_SET_SIZE> data = data_set;

		auto start = std::chrono::high_resolution_clock::now();

		sort::insertion(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Insertion sorting algorithm execution time[" << data[0] << "]: " << duration.count() << " milliseconds, array size: " << DATA_SET_SIZE << std::endl;
		// Insertion sorting algorithm execution time[0]: 883 milliseconds, array size: 100000

		assert(std::equal(data.begin(), data.end(), sorted_data_set.begin()));
	}

	//Selection Sorting 
	{
		std::array<int, DATA_SET_SIZE> data = data_set;

		auto start = std::chrono::high_resolution_clock::now();

		sort::selection(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Selection sorting algorithm execution time[" << data[0] << "]: " << duration.count() << " milliseconds, array size: " << DATA_SET_SIZE << std::endl;
		// Selection sorting algorithm execution time[0]: 3249 milliseconds, array size: 100000

		assert(std::equal(data.begin(), data.end(), sorted_data_set.begin()));
	}

	//Merge Sorting 
	{
		std::array<int, DATA_SET_SIZE> data = data_set;

		auto start = std::chrono::high_resolution_clock::now();

		sort::merge(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Merge sorting algorithm execution time[" << data[0] << "]: " << duration.count() << " milliseconds, array size: " << DATA_SET_SIZE << std::endl;
		// Result: Merge sorting algorithm execution time[0]: 1545 milliseconds, array size: 100000

		assert(std::equal(data.begin(), data.end(), sorted_data_set.begin()));
	}

	//Quick Sorting 
	{
		std::array<int, DATA_SET_SIZE> data = data_set;

		auto start = std::chrono::high_resolution_clock::now();

		sort::quick(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Quick sorting algorithm execution time[" << data[0] << "]: " << duration.count() << " milliseconds, array size: " << DATA_SET_SIZE << std::endl;
		// Result: Quick sorting algorithm execution time[0]: 6 milliseconds, array size: 100000

		assert(std::equal(data.begin(), data.end(), sorted_data_set.begin()));
	}

	//Heap Sorting 
	{
		std::array<int, DATA_SET_SIZE> data = data_set;

		auto start = std::chrono::high_resolution_clock::now();

		sort::heap(data);

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "Heap sorting algorithm execution time[" << data[0] << "]: " << duration.count() << " milliseconds, array size: " << DATA_SET_SIZE << std::endl;
		// Result: Heap sorting algorithm execution time[0]: 8 milliseconds, array size: 100000

		assert(std::equal(data.begin(), data.end(), sorted_data_set.begin()));
	}

	//STL Sorting 
	{
		std::array<int, DATA_SET_SIZE> data = data_set;

		auto start = std::chrono::high_resolution_clock::now();

		std::sort(data.begin(), data.end());

		auto end = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
		std::cout << "STL sorting algorithm execution time[" << data[0] << "]: " << duration.count() << " milliseconds, array size: " << DATA_SET_SIZE << std::endl;
		// STL sorting algorithm execution time[0]: 6 milliseconds, array size: 100000

		assert(std::equal(data.begin(), data.end(), sorted_data_set.begin()));
	}

	return 0;
}