/*
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int kor;
	int math;
	int eng;
	int sum;
	double avg;
	char grade;
	string pass;

	Student(string name, int kor, int eng, int math) :name(name), kor(kor), math(math), eng(eng) {
	}

	void sumf() {
		sum = kor + math + eng;
	}

	void avgf() {
		avg = sum / 3.0;
	}

	void gradef() {
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
	}

	void passf() {
		if (avg >= 70) {
			pass = "�հ�";
		}
		else {
			pass = "���հ�";
		}
	}

	void ToString() {
		sumf();
		avgf();
		gradef();
		passf();

		cout << "[" << name << "]���� ������ ";
		cout << "��������[" << kor <<"],";
		cout << "��������[" << math <<"],";
		cout << "��������["<< eng << "]�̰�, \n";
		cout << "����[" << sum<<"], ";
		cout << "���[" << avg <<"], ";
		cout << "����[" << grade << "]����\n";
		cout << "���� ���迡[" << pass << "] �Ͽ����ϴ�.";
	}
};

int main() {
	string name;
	int kor;
	int math;
	int eng;

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << "1)���� ������ �Է��ϼ���: ";
	cin >> kor;
	cout << "2)���� ������ �Է��ϼ���: ";
	cin >> math;
	cout << "3)���� ������ �Է��ϼ���: ";
	cin >> eng;

	Student student(name, kor, math, eng);
	cout << student.name;
	student.ToString();

	return 0;
}
*/