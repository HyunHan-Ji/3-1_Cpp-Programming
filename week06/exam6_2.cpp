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
			pass = "합격";
		}
		else {
			pass = "불합격";
		}
	}

	void ToString() {
		sumf();
		avgf();
		gradef();
		passf();

		cout << "[" << name << "]님의 성적은 ";
		cout << "국어점수[" << kor <<"],";
		cout << "수학점수[" << math <<"],";
		cout << "영어점수["<< eng << "]이고, \n";
		cout << "총점[" << sum<<"], ";
		cout << "평균[" << avg <<"], ";
		cout << "학점[" << grade << "]으로\n";
		cout << "졸업 시험에[" << pass << "] 하였습니다.";
	}
};

int main() {
	string name;
	int kor;
	int math;
	int eng;

	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "1)국어 성적을 입력하세요: ";
	cin >> kor;
	cout << "2)수학 성적을 입력하세요: ";
	cin >> math;
	cout << "3)영어 성적을 입력하세요: ";
	cin >> eng;

	Student student(name, kor, math, eng);
	cout << student.name;
	student.ToString();

	return 0;
}
*/