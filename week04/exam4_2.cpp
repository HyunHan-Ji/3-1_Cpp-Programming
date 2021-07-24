#include <iostream>
using namespace std;

int main4_2() {
	int arr[] = { 32,45,74,34,24 };
	int sum = 0;

	int &p = *arr;
	cout << "배열의 값: ";
	for (int i = 0; i < 5; i++) {
		cout << *(&p + i) << " ";
		sum += *(&p + i);
	}
	cout << "\n합:" << sum;
	return 0;

}