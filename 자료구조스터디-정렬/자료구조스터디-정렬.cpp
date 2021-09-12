

#include <iostream>
using namespace std;

int main() {
	int array[] = { 7,5,9,0,3,1 };
	int len = sizeof(array) / sizeof(array[0]);

	int temp;

	for (int i = 1; i < len; i++) {
		for (int j = i; j > 0; j--) {
			if (array[j] < array[j - 1]) {
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
			else break;
		}
	}

	for (int i = 0; i < len; i++) {
		cout << array[i] << " ";
	}
}
