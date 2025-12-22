//073p_연습문제6
//더하기 또는 곱하기를 선택한 후 정수 3개를 입력해서 결과를 출력하는 코드를 작성하세요.
//#include <stdio.h>
//
//int main()
//{
//	int a, b, c;
//	int result;
//	char k;
//
//	printf("연산 기호를 입력하세요 '+' OR '*' ==> ");
//	if (scanf("%c", &k) != 1) {
//		return 0;
//	}
//	printf("첫번째 숫자를 입력하세요. ==> ");
//	if (scanf("%d", &a) != 1) {
//		return 0;
//	}
//	printf("두번째 숫자를 입력하세요. ==> ");
//	if (scanf("%d", &b) != 1) {
//		return 0;
//	}
//	printf("세번째 숫자를 입력하세요. ==> ");
//	if (scanf("%d", &c) != 1) {
//		return 0;
//	};
//	if (k == '+') {
//		result = a + b + c;
//		printf("정수 3개의 합은 %d 입니다.\n", result);
//	}
//	else if (k == '*') {
//		result = a * b * c;
//		printf("정수 3개의 곱은 %d 입니다.\n", result);
//	}
//	else {
//		printf("'+' OR '*' 값이 아닙니다.\n");
//	}
//	return 0;
//}


//074p_연습문제7
//두 수의 나눗셈을 실행하는 코드를 작성하세요. 실행 조건은 0으로 나누면 입력을 다시 한번 받도록 하고,
//0을 연속해서 나누면 메시지와 함께 프로그램이 종료되도록 구성합니다.
//#include <stdio.h>
//
//int main()
//{
//	int a, b, result;
//	int writeCount = 0;
//
//	printf("## 두 수를 나누기 ##\n");
//	printf("첫 번째 값 ==> ");
//	if (scanf("%d", &a) != 1) {
//		return 0;
//	}
//
//	while (1) {
//		printf("두 번째 값 ==> ");
//		if (scanf("%d", &b) != 1) {
//			return 0;
//		}
//		if (b != 0) {
//			result = a / b;
//			printf("%d / %d = %d", a, b, result);
//			break;
//		}
//		else if (b == 0) {
//			writeCount++;
//			if (writeCount == 1) {
//				printf("다시 입력하세요. ");
//			}
//			else if (writeCount == 2) {
//				printf("또 다시 입력하세요. ");
//			}
//			else if (writeCount == 3) {
//				printf("0을 세 번 입력했습니다. 종료합니다.\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}


//223p_연습문제8
//#include <stdio.h>
//
//int main()
//{
//	for (int i = 9; i >= 1; i--) {
//		for (int j = 9; j >= 2; j--) {
//			printf("%d X %d = %2d   ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//223p_연습문제9
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[100] = {};
//
//	printf("영문자 및 숫자를 입력 (100자 이하) : ");
//	if (scanf("%s", str) != 1) {
//		return 0;
//	};
//
//	printf("\n");
//	printf("입력한 문자열 ==> %s\n", str);
//	printf("변환된 문자열 ==> ");
//
//	int str_cnt = (int)strlen(str);
//
//	for (int i = str_cnt; i >= 0; i--) {
//		char ch = str[i];
//		if (ch >= '0' && ch <= '9') {
//			ch = '#';
//		}
//		putchar(ch);
//	}
//	putchar('\n');
//
//	return 0;
//}


//292p_연습문제9
//문자열을 입력받고 그 문자열에서 변환할 기존 문자와 새로운 문자를 각각 입력받은 뒤
//변환된 문자열을 거꾸로 출력하는 프로그램을 작성해보세요.
//단, 코드에서 배열은 1개만 선언해 사용하고,
//제시된 실행 결과와 같이 문자열을 거꾸로 출력해야 합니다.
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[100] = {};
//	char ch1, ch2;
//	int count, i, j;
//
//	printf("문자열을 입력하세요.");
//	gets_s(str);
//
//	printf("기존 문자와 새로운 문자 : ");
//	if (scanf("%c %c", &ch1, &ch2) != 2) {
//		return 0;
//	}
//
//	count = (int)strlen(str);
//
//	for (i = 0, j = count - 1; i < j; i++, j--) {
//		char tmp = str[i];
//		str[i] = str[j];
//		str[j] = tmp;
//	}
//	printf("내용을 거꾸로 출력 ==> %s \n", str);
//
//	for (i = 0; i < count; i++) {
//		if (str[i] == ch1)
//			str[i] = ch2;
//	}
//	printf("문자를 반환하여 출력 ==> %s \n", str);
//
//	return 0;
//}


//360p_연습문제8
//#include <stdio.h>
//#include <string.h>
//
//char* upper_lower(char* inStr) {
//	int diff = 'a' - 'A';
//
//	int len = strlen(inStr);
//
//	for (int i = 0; i < len; i++) {
//		if (inStr[i] >= 'a' && inStr[i] <= 'z') {
//			inStr[i] = inStr[i] - diff;
//		}
//		else if(inStr[i] >= 'A' && inStr[i] <= 'Z') {
//			inStr[i] = inStr[i] + diff;
//		}
//	}
//	return inStr;
//}
//
//int main()
//{
//	char inStr[100], outStr[100];
//
//	printf("문자열을 입력(100자 이내) : ");
//	if (scanf("%s", inStr) != 1) {
//		return 0;
//	}
//
//	strcpy(outStr, upper_lower(inStr));
//
//	printf("대소문자 변환 결과 ==> %s\n", outStr);
//
//	return 0;
//}


//361p_연습문제9
//주사위 2개를 던져 나온 숫자 10개를 나열하는 코드를 작성하세요.
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int throwDice() {
//	return rand() % 6 + 1;
//}
//
//void main()
//{
//	short int diceNum[10] = {};
//	char dup = 'N';
//
//	printf("** 주사위 2개 던지기 시작 ** \n\n");
//	srand((unsigned)time(NULL));
//
//	int equalCount = 0;
//	while (1) {
//		int dice1 = throwDice();
//		int dice2 = throwDice();
//
//		if (dice1 == dice2) {
//			diceNum[equalCount] = dice1;
//			equalCount++;
//		}
//		if (equalCount == 10) {
//			break;
//		}
//	}
//	printf("같은 숫자가 나온 순서 ==> ");
//	for (int i = 0; i < 10; i++) {
//		printf("%d  ", diceNum[i]);
//	}
//	printf("\n\n");
//}


//419p_연습문제4
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int getNumber() {
//	return rand() % 100 + 1;
//}
//
//int main()
//{
//	int* p = NULL;
//	int cnt = 0;
//	int sum = 0;
//
//	printf("랜덤하게 뽑힌 숫자 ==> ");
//	srand((unsigned)time(NULL));
//
//	while (1) {
//		int num = getNumber();
//
//		if (cnt >= 1 && num == 99) {
//			break;
//		}
//
//		int *tmp = (int*)realloc(p, sizeof(int) * (cnt + 1));
//		if (tmp == NULL) {
//			free(p);
//			printf("\n메모리 할당 실패\n");
//			return -1;
//		}
//		p = tmp;
//
//		p[cnt] = num;
//		printf("%d ", num);
//		cnt++;
//	}
//	for (int i = 0; i < cnt; i++) {
//		sum += p[i];
//	}
//	printf("\n 랜덤한 숫자 합 ==> %d\n", sum);
//
//	free(p);
//	return 0;
//}


//420p_연습문제7
//#include <stdio.h>
//#include <malloc.h>
//#include <string.h>
//
//int main()
//{
//	char* p[5] = { 0, };
//	char imsi[200];
//	int count = 0;
//
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	printf("\n -- win.ini 파일의 원 내용(5줄) -- \n");
//	for (count = 0; count < 5; count++)
//	{
//		fgets(imsi, 200, rfp);
//
//		if (feof(rfp))
//			break;
//
//		printf("%d : %s", count + 1, imsi);
//
//		int size = strlen(imsi);
//		p[count] = (char*)malloc((sizeof(char) * size) + 1);
//
//		strcpy(p[count], imsi);
//	}
//	fclose(rfp);
//
//	printf("\n -- 순서를 거꾸로 출력 -- \n");
//	for (count = 4; count >= 0; count--)
//	{
//		printf("%d :%s", count + 1, p[count]);
//	}
//	for (count = 0; count < 5; count++)
//		free(p[count]);
//
//	return 0;
//}


//454p_연습문제10
#include <stdio.h>

int main()
{
	typedef struct _employee {
		union _nm {
			char name[10];
			char dept[10];
		} nm;
		union _id {
			char phone[15];
			char jumin[15];
		} id;
	} employee;

	employee e1;

	printf("이름 또는 부서 --> ");
	scanf("%s", e1.nm.name);
	printf("전화번호 또는 사무실 --> ");
	scanf("%s", e1.id.jumin);

	printf("\n-- 구조체/공용체 혼합 활용 --\n");
	printf("이름/부서 ==> %s\n", e1.nm.name);
	printf("전화번호/사무실 ==> %s\n", e1.id.phone);

	return 0;
}