#include <iostream>
using namespace std;

int main4_2() {
	int arr[] = { 32,45,74,34,24 };
	int sum = 0;

	int &p = *arr;
	cout << "�迭�� ��: ";
	for (int i = 0; i < 5; i++) {
		cout << *(&p + i) << " ";
		sum += *(&p + i);
	}
	cout << "\n��:" << sum;
	return 0;

}