#include <iostream>
using namespace std;

int main3_1() {
	int x, y,min,max;
	int sum = 0;

	cout << "x���� �Է��ϼ���: ";
	cin >> x;

	cout << "y���� �Է��ϼ���: ";
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

	cout << "���� �� " << min << "���� ū �� " << max << "������ ���� " << sum << "�Դϴ�";

	return 0;
}
