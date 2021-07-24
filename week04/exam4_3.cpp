#include <iostream>
using namespace std;

int main4_3() {
	int a = 1;
	int b = 1;

	if (&a == &b) {
		cout << "같은 주소 입니다";
	}
	else {
		cout << "다른 주소 입니다";
	}

	return 0;
}
