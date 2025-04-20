#pragma once

#include <array>
#include <iostream>

static const int DATA_SET_SIZE = 100000; //stack overflow)

namespace sort {
	void selection(std::array<int, DATA_SET_SIZE>& arr);
	void insertion(std::array<int, DATA_SET_SIZE>& arr);
	void bubble(std::array<int, DATA_SET_SIZE>& arr);
	void quick(std::array<int, DATA_SET_SIZE>& arr);
	void merge(std::array<int, DATA_SET_SIZE>& arr);
	void heap(std::array<int, DATA_SET_SIZE>& arr);
}