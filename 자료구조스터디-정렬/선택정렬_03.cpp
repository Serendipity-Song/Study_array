


#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	
	struct student* a = new student[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i].name;
		cin >> a[i].scr;
	}

	int min_index = 0;
	struct student temp;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j > n; j++) {
			if (a[min_index].scr < a[j].scr)
				min_index = j;
		}

		temp = a[i];
		a[i] = a[min_index];
		a[min_index] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << a[i].name << " ";
	}

	delete[] a;
}