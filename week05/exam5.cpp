#include <iostream>
using namespace std;

struct student {
	int num;
	char name[10];
	int kor;
	int eng;
	int math;
	int sum;
	double avg;
	int grade = 1;	//���
};

int main5() {
	student students[5];

	for (int i = 0; i < 5; i++) {
		students[i].num = i + 1;
		cout << "[" << i + 1 << "]�� �л��� �̸��� ������ �Է��ϼ���\n";
		cout << "�̸��� �Է��ϼ���: ";
		cin >> students[i].name;
		cout << "���� ������ �Է��ϼ���: ";
		cin >> students[i].kor;
		cout << "���� ������ �Է��ϼ���: ";
		cin >> students[i].eng;
		cout << "���� ������ �Է��ϼ���: ";
		cin >> students[i].math;
		students[i].sum = students[i].kor + students[i].eng + students[i].math;
		students[i].avg = students[i].sum / 3.0;
	}

	//��� ���
	for (int i = 0; i < 5; i++) {	
		for (int j = 0; j < 5; j++) {
			if (students[i].avg < students[j].avg) {
				students[i].grade += 1;
			}
		}
	}

	//���
	cout.precision(4);
	for (int i = 0; i < 5; i++) {
		cout << "������������������������������������������������������������������\n";
		cout << "����ȣ    �� " << students[i].num << "\t�� �̸� �� " << students[i].name << "\t��\n";
		cout << "������������������������������������������������������������������\n";
		cout << "������������ " << students[i].kor << "\t�� �հ� �� " << students[i].sum << "\t��\n";
		cout << "������������������������������������������������������������������\n";
		cout << "������������ " << students[i].eng << "\t�� ��� �� " << students[i].avg << "\t��\n";
		cout << "������������������������������������������������������������������\n";
		cout << "������������ " << students[i].math << "\t�� ��� �� " << students[i].grade << "/5\t��\n";
		cout << "������������������������������������������������������������������\n";
	}

	return 0;
}