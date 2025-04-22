#include "Sort.h"


namespace sort {
	
	void selection(std::array<int, DATA_SET_SIZE>& arr) {
		for (int i = 0; i < arr.size() - 1; i++) {
			int min_id = i;
			
			for (int j = i + 1; j < arr.size(); j++)
				if (arr[min_id] > arr[j]) min_id = j;

			if(i != min_id) std::swap(arr[i], arr[min_id]);
		}
	}
}