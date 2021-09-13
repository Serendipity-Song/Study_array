
#include <iostream>
using namespace std;

//선택정렬. 가장 작은 것을 선택한다.

int main() {
	int array[] = { 7,5,9,0,3,1,6,2,4,8 };

	int len = sizeof(array) / sizeof(array[0]);

	int min_index, temp;
	//각각 가장 작은 데이터의 인덱스, wap 과정에서 숫자를 저장할 변수

	for (int i = 0; i < len; i++) {
		min_index = i;
		for (int j = i + 1; j < len; j++) {
			if (array[min_index] > array[j])
				min_index = j;
		}
		temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;

	}

	for (int i = 0; i < len; i++) {
		cout << array[i] << " ";
	}
}