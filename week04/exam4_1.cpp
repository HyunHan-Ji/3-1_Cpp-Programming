#include <iostream>
using namespace std;

int main4_1() {
	int arr[] = { 1,2,3,4,5 };

	cout << "배열의 주소값: " << &arr << "\n";
	for (int i = 0; i < 5; i++) {
		cout << "주소값: " << &arr[i] << " 값: " << arr[i] << "\n";
	}

	return 0;
}