#include <iostream>

int mai() {
	int kor;
	int eng;
	int math;

	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &kor);
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &eng);
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &math);

	printf("[�����]");
	for (int i = 0; i < kor / 10; i++) {
		printf("��");
	}
	printf("(%d��)\n", kor);

	printf("[�����]");
	for (int i = 0; i < eng / 10; i++) {
		printf("��");
	}
	printf("(%d��)\n", eng);

	printf("[���м���]");
	for (int i = 0; i < math / 10; i++) {
		printf("��");
	}
	printf("(%d��)\n", math);

	return 0;
}

