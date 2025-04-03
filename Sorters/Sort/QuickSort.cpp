#include "Sort.h"


void _quick(std::vector<int>& arr) {
	if (arr.size() < 2) return;

	int pivot_id = 0;
	int pivot = arr[pivot_id];

	int i = 1, j = arr.size() - 1;
	while (i <= j) {
		if (arr[i] < pivot) i++;
		else if (arr[j] >= pivot) j--;
		else std::swap(arr[i], arr[j]);
	}

	std::swap(arr[j], arr[pivot_id]);
	pivot_id = j;
	
	std::vector<int> left(arr.begin(), arr.begin() + pivot_id);
	_quick(left);

	std::vector<int> right(arr.begin() + pivot_id + 1, arr.end());
	_quick(right);

	arr.clear();
	arr.insert(arr.end(), left.begin(), left.end());
	arr.push_back(pivot);
	arr.insert(arr.end(), right.begin(), right.end());
}

namespace sort {
	
	void quick(std::vector<int>& arr) {
		_quick(arr);
	}
}