

#include <iostream>
using namespace std;


void quick_sort(int array[], int start, int end) {
	if (start >= end) return;

	int pivot = start;
	int left = start + 1;
	int right = end;
	while (left <= right) {
		while (left <= end && array[left] <= array[pivot]) {
			left += 1;
		}

		while (right > start && array[right] >= array[pivot]) {
			right -= 1;
		}
		if (left > right) {
			int temp = array[right];
			array[right] = array[pivot];
			array[right] = temp;
		}
		else {
			int temp = array[left];
			array[left] = array[right];
			array[right] = temp;
		}
	}

	quick_sort(array, start, right - 1);
	quick_sort(array, right + 1, end);

}


int main() {
	int array[] = { 7,5,9,0,3,1,6,2,4,8 };

	int len = sizeof(array) / sizeof(array[0]);

	quick_sort(array, 0, len - 1);

	for (int i = 0; i < len; i++) {
		cout << array[i] << " ";
	}
	return 0;
}