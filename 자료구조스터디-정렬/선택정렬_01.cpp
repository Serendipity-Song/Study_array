
#include <iostream>
using namespace std;

//��������. ���� ���� ���� �����Ѵ�.

int main() {
	int array[] = { 7,5,9,0,3,1,6,2,4,8 };

	int len = sizeof(array) / sizeof(array[0]);

	int min_index, temp;
	//���� ���� ���� �������� �ε���, wap �������� ���ڸ� ������ ����

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