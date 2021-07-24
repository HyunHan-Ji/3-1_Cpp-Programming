#include <iostream>
using namespace std;

int getExp1(int base, int exp) {
	int value = 1;
	for (int n = 0; n < exp; n++) {
		value = value * base;
	}
	return value;
}

int main9_2() {
	int v = getExp1(2, 3);
	cout << "2의 3승은 " << v << "입니다." << endl;

	int e = getExp1(2, -3);
	cout << "2의 -3승은 " << e << "입니다." << endl;

	return 0;
}
