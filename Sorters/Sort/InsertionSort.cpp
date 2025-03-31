#include "Sort.h"



namespace sort {
	void insertion_type1(std::vector<int>& arr) {
		if (arr.size() < 2) return;

		for (int i = 1; i < arr.size(); i++) {
			int tmp = arr[i];

			for (int j = 0; j < i; j++) {
				if (tmp <= arr[j]) {
					arr.erase(arr.begin() + i);
					arr.insert(arr.begin() + j, tmp);
					break;
				}
			}
		}
	}

	void insertion_type2(std::vector<int>& arr) {
		if (arr.size() < 2) return;

		for (int i = 1; i < arr.size(); i++) {
			int tmp = arr[i];
			int j = i - 1;

			while (j >= 0 && tmp < arr[j]) {
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = tmp;
		}
	}
}