#include <iostream>

int mai() {
	int kor;
	int eng;
	int math;

	printf("국어 성적을 입력하세요 : ");
	scanf_s("%d", &kor);
	printf("영어 성적을 입력하세요 : ");
	scanf_s("%d", &eng);
	printf("수학 성적을 입력하세요 : ");
	scanf_s("%d", &math);

	printf("[국어성적]");
	for (int i = 0; i < kor / 10; i++) {
		printf("■");
	}
	printf("(%d점)\n", kor);

	printf("[영어성적]");
	for (int i = 0; i < eng / 10; i++) {
		printf("■");
	}
	printf("(%d점)\n", eng);

	printf("[수학성적]");
	for (int i = 0; i < math / 10; i++) {
		printf("■");
	}
	printf("(%d점)\n", math);

	return 0;
}

