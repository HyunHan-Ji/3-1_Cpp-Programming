#include <iostream>

char str[10];	//�Է¹޴� ���ڿ�
char ptstr[10];	//��µǴ� ���ڿ�
char pt[7];		//��µǴ� ���ڿ��� ����

int main1_2(void) {
	int menu;
	while (1) {

		printf("���ڿ��� �Է��ϼ���:");
		scanf_s("%s", &str, 10);
		printf("1) ���ڿ��� ��� �빮�ڷ� ����մϴ�.\n");
		printf("2) ���ڿ��� ��� �ҹ��ڷ� ����մϴ�.\n");
		printf("3) ���ڿ��� �Ųٷ� ����մϴ�.\n");
		printf("4) ������ �״�� ����մϴ�.\n");
		printf("5) ���α׷��� �����մϴ�.\n");
		printf("��� �޴��� �����ϼ���");
		scanf_s("%d", &menu);
		if (menu == 1) {
			strcpy_s(pt, "�빮��");

			int i;
			for (i = 0; i <= strlen(str); i++) {
				if (str[i] >= 'a' && str[i] <= 'z') {
					ptstr[i] = str[i] - 32;
				}
				else {
					ptstr[i] = str[i];
				}
				if (i == strlen(str)) {
					ptstr[i] = '\0';
				}
			}
		}
		else if (menu == 2) {
			strcpy_s(pt, "�ҹ���");
			int i;
			for (i = 0; i <= strlen(str); i++) {
				if (str[i] >= 'A' && str[i] <= 'Z') {
					ptstr[i] = str[i] + 32;
				}
				else {
					ptstr[i] = str[i];
				}
				if (i == strlen(str)) {
					ptstr[i] = '\0';
				}
			}
		}
		else if (menu == 3) {
			strcpy_s(pt, "�Ųٷ�");
			int i;
			int len = strlen(str);
			for (i = 0; i <= len; i++) {
				ptstr[i] = str[len - i - 1];

				if (i == len) {
					ptstr[i] = '\0';
				}
			}
		}
		else if (menu == 4) {
			strcpy_s(pt, "�״��");
			strcpy_s(ptstr, str);
		}
		else if (menu == 5) {
			printf("���α׷��� �����մϴ�.");
			break;
		}

		printf("���������ʹ� %s �̰�, %s�� %s �Դϴ�.\n", str, pt, ptstr);
	}
	return 0;
}
