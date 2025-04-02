#include "Sort.h"


void _merge(std::vector<int>& arr) {

	if (arr.size() > 1)
	{
		std::vector<int> left(arr.begin(), arr.begin() + arr.size() / 2);
		std::vector<int> right(arr.begin() + arr.size() / 2, arr.begin() + arr.size());
		_merge(left);
		_merge(right);

		int i = 0, j = 0, k = 0;
		while (i < left.size() || j < right.size()) {
			if(i >= left.size()) arr[k++] = right[j++];
			else if (j >= right.size()) arr[k++] = left[i++];
			else {
				if (left[i] <= right[j]) arr[k++] = left[i++];
				else arr[k++] = right[j++];
			}
		}
	}
}

namespace sort {
	
	void merge(std::vector<int>& arr) {
		_merge(arr);
	}
}