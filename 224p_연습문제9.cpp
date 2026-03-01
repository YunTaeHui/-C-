//223p_연습문제9
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100] = {};

	printf("영문자 및 숫자를 입력 (100자 이하) : ");
	if (scanf("%s", str) != 1) {
		return 0;
	};

	printf("\n");
	printf("입력한 문자열 ==> %s\n", str);
	printf("변환된 문자열 ==> ");

	int str_cnt = (int)strlen(str);

	for (int i = str_cnt; i >= 0; i--) {
		char ch = str[i];
		if (ch >= '0' && ch <= '9') {
			ch = '#';
		}
		putchar(ch);
	}
	putchar('\n');

	return 0;
}