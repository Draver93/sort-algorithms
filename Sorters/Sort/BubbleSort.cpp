#include "Sort.h"


namespace sort {
	void bubble(std::vector<int>& arr) {

		bool changed = false;
		do {
			changed = false;
			for (int i = 0; i < arr.size() - 1; i++) {

				if (arr[i] > arr[i + 1]) {
					int tmp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = tmp;
					changed = true;
				}

			}
		} while (changed);

	}
}