#include "Sort.h"


void _merge(int *arr, size_t size) {
	if (size < 2) return;

	int* left = arr;
	size_t left_size = size / 2;

	int* right = arr + (size / 2);
	size_t right_size = (size / 2);

	_merge(left, left_size);
	_merge(right, right_size);

	size_t pos = size / 2;
	while (pos < size) {

		size_t shift_pos = pos;
		while (shift_pos > 0)
			if (arr[shift_pos] < arr[shift_pos - 1]) {
				std::swap(arr[shift_pos], arr[shift_pos - 1]);
				shift_pos--;
			} else break;

		pos++;
	}
}

namespace sort {
	
	void merge(std::array<int, DATA_SET_SIZE>& arr) {
		_merge(arr.data(), arr.size());
	}
}