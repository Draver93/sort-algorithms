#include "Sort.h"


namespace sort {

	void insertion(std::array<int, DATA_SET_SIZE>& arr) {
		if (arr.size() < 2) return;

		for (int i = 1; i < arr.size(); i++) {
			int tmp = arr[i];
			int j = i - 1;

			while (j >= 0 && tmp < arr[j]) {
				arr[j + 1] = arr[j];
				j--;
			}
		}
	}
}