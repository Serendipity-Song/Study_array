

#include <iostream>
using namespace std;



int main() {


	int n, x;
	cin >> n;
	int* array = new int[n];


	for (int i = 0; i < n; i++) {
		cin >> x;
		array[i] = x;
	}


	int max_index, temp;


	for (int i = 0; i < n; i++) {
		max_index = i;
		for (int j = i + 1; j < n; j++) {
			if (array[max_index] < array[j])
				max_index = j;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}

	delete[] array;

}