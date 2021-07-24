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
	int grade = 1;	//등수
};

int main5() {
	student students[5];

	for (int i = 0; i < 5; i++) {
		students[i].num = i + 1;
		cout << "[" << i + 1 << "]번 학생의 이름과 성적을 입력하세요\n";
		cout << "이름을 입력하세요: ";
		cin >> students[i].name;
		cout << "국어 성적을 입력하세요: ";
		cin >> students[i].kor;
		cout << "영어 성적을 입력하세요: ";
		cin >> students[i].eng;
		cout << "수학 성적을 입력하세요: ";
		cin >> students[i].math;
		students[i].sum = students[i].kor + students[i].eng + students[i].math;
		students[i].avg = students[i].sum / 3.0;
	}

	//등수 계산
	for (int i = 0; i < 5; i++) {	
		for (int j = 0; j < 5; j++) {
			if (students[i].avg < students[j].avg) {
				students[i].grade += 1;
			}
		}
	}

	//출력
	cout.precision(4);
	for (int i = 0; i < 5; i++) {
		cout << "┌────────┬──────┬──────┬────────┐\n";
		cout << "│번호    │ " << students[i].num << "\t│ 이름 │ " << students[i].name << "\t│\n";
		cout << "├────────┼──────┼──────┼────────┤\n";
		cout << "│국어점수│ " << students[i].kor << "\t│ 합계 │ " << students[i].sum << "\t│\n";
		cout << "├────────┼──────┼──────┼────────┤\n";
		cout << "│영어점수│ " << students[i].eng << "\t│ 평균 │ " << students[i].avg << "\t│\n";
		cout << "├────────┼──────┼──────┼────────┤\n";
		cout << "│수학점수│ " << students[i].math << "\t│ 등수 │ " << students[i].grade << "/5\t│\n";
		cout << "└────────┴──────┴──────┴────────┘\n";
	}

	return 0;
}