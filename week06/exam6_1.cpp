#include <iostream>
#include <string>
using namespace std;

int main6_1() {
	string name;
	int kor;
	int math;
	int eng;
	int sum;
	double avg;
	char grade;
	string pass;

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << "1)���� ������ �Է��ϼ���: ";
	cin >> kor;
	cout << "2)���� ������ �Է��ϼ���: ";
	cin >> math;
	cout << "3)���� ������ �Է��ϼ���: ";
	cin >> eng;

	sum = kor + math + eng;
	avg = sum / 3.0;

	if (avg >= 90) {
		grade = 'A';
	}
	else if (avg >= 80) {
		grade = 'B';
	}
	else if (avg >= 70) {
		grade = 'C';
	}
	else if (avg >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}

	if (avg >= 70) {
		pass = "�հ�";
	}
	else {
		pass = "���հ�";
	}

	cout << "[" << name << "]���� ������ ";
	cout << "��������[" << kor << "],";
	cout << "��������[" << math << "],";
	cout << "��������[" << eng << "]�̰�, \n";
	cout << "����[" << sum << "], ";
	cout << "���[" << avg << "], ";
	cout << "����[" << grade << "]����\n";
	cout << "���� ���迡[" << pass << "] �Ͽ����ϴ�.";

	return 0;

}