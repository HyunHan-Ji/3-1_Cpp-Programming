#include <iostream>
using namespace std;

int main4_1() {
	int arr[] = { 1,2,3,4,5 };

	cout << "�迭�� �ּҰ�: " << &arr << "\n";
	for (int i = 0; i < 5; i++) {
		cout << "�ּҰ�: " << &arr[i] << " ��: " << arr[i] << "\n";
	}

	return 0;
}