#include <iostream>
#include <string>

using namespace std;

int main3_2() {
	string str;
	int vow = 0;
	cout << "���� ���ڿ��� �Է��ϼ���: ";
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == 'a' || str.at(i) == 'A') {
			vow++;
		}
		else if (str.at(i) == 'e' || str.at(i) == 'E') {
			vow++;
		}
		else if (str.at(i) == 'i' || str.at(i) == 'O') {
			vow++;
		}
		else if (str.at(i) == 'o' || str.at(i) == 'O') {
			vow++;
		}
		else if (str.at(i) == 'u' || str.at(i) == 'U') {
			vow++;
		}
	}

	cout << str<<"���ڿ� �߿���\n";
	cout << "��ü ���ڿ��� ������ " << str.length() << "��,\n";
	cout << "������ ������ " << vow << "��,\n";
	cout << "������ ������ " << str.length()-vow << "�� �Դϴ�";

	return 0;
}