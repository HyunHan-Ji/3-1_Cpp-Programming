#include <iostream>
using namespace std;

int main3_1() {
	int x, y,min,max;
	int sum = 0;

	cout << "x값을 입력하세요: ";
	cin >> x;

	cout << "y값을 입력하세요: ";
	cin >> y;

	if (x < y) {
		min = x;
		max = y;
	}
	else {
		min = y;
		max = x;
	}
	for (int i = min; i <= max; i++) {
		sum += i;
	}

	cout << "작은 수 " << min << "에서 큰 수 " << max << "까지의 합은 " << sum << "입니다";

	return 0;
}
