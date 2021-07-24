#include <iostream>
#include <string>

using namespace std;

int main3_2() {
	string str;
	int vow = 0;
	cout << "영문 문자열을 입력하세요: ";
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

	cout << str<<"문자열 중에서\n";
	cout << "전체 문자열의 개수는 " << str.length() << "개,\n";
	cout << "모음의 개수는 " << vow << "개,\n";
	cout << "자음의 개수는 " << str.length()-vow << "개 입니다";

	return 0;
}