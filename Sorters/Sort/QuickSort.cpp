#include "Sort.h"


void _quick(int* arr, size_t size) {
	if (size < 2) return;

	int pivot_id = 0;
	int pivot = arr[pivot_id];

	int i = 1, j = size - 1;
	while (i <= j) {
		if (arr[i] < pivot) i++;
		else if (arr[j] >= pivot) j--;
		else std::swap(arr[i], arr[j]);
	}

	std::swap(arr[j], arr[pivot_id]);
	pivot_id = j;
	
	int* left = arr;
	_quick(left, pivot_id);

	int* right = arr + (pivot_id + 1);
	_quick(right, size - (pivot_id + 1));
}

namespace sort {
	
	void quick(std::array<int, DATA_SET_SIZE>& arr) {
		_quick(arr.data(), arr.size());
	}
}