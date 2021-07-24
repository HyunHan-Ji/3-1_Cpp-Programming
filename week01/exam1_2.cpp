#include <iostream>

char str[10];	//입력받는 문자열
char ptstr[10];	//출력되는 문자열
char pt[7];		//출력되는 문자열의 조건

int main1_2(void) {
	int menu;
	while (1) {

		printf("문자열을 입력하세요:");
		scanf_s("%s", &str, 10);
		printf("1) 문자열을 모두 대문자로 출력합니다.\n");
		printf("2) 문자열을 모두 소문자로 출력합니다.\n");
		printf("3) 문자열을 거꾸로 출력합니다.\n");
		printf("4) 원본을 그대로 출력합니다.\n");
		printf("5) 프로그램을 종료합니다.\n");
		printf("출력 메뉴를 선택하세요");
		scanf_s("%d", &menu);
		if (menu == 1) {
			strcpy_s(pt, "대문자");

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
			strcpy_s(pt, "소문자");
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
			strcpy_s(pt, "거꾸로");
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
			strcpy_s(pt, "그대로");
			strcpy_s(ptstr, str);
		}
		else if (menu == 5) {
			printf("프로그램을 종료합니다.");
			break;
		}

		printf("원본데이터는 %s 이고, %s로 %s 입니다.\n", str, pt, ptstr);
	}
	return 0;
}
