#include "Sort.h"


void heapify(std::array<int, DATA_SET_SIZE>& arr, int pos, int size) {
	int large_id = pos;
	int left = 1 + pos * 2;
	int right = 2 + pos * 2;

	if(left < size && arr[large_id] < arr[left]) large_id = left;
	if (right < size && arr[large_id] < arr[right]) large_id = right;

	if (large_id != pos) {
		std::swap(arr[large_id], arr[pos]);
		heapify(arr, large_id, size);
	}
}

namespace sort {
	
	void heap(std::array<int, DATA_SET_SIZE>& arr) {
		int heap_size = arr.size();

		for (int i = heap_size / 2 - 1; i >= 0; i--) {
			heapify(arr, i, heap_size);
		}
		for (int i = heap_size - 1; i >= 0; i--) {
			std::swap(arr[0], arr[i]);
			heapify(arr, 0, i);
		}
	}
}