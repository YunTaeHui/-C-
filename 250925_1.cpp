//20 page 문제4 (16진수)
//#include <stdio.h>
//
//int main()
//{
//	char initial;
//
//	printf("문자를 입력하세요.\n");
//	scanf("%c", &initial);
//
//	if (initial >= 0x41 && initial <= 'Z')
//		printf("%c는 대문자 입니다.\n", initial);
//	else if (initial >= 'a' && initial <= 'z')
//		printf("%c는 소문자 입니다.\n", initial);
//	else
//		printf("알파벳이 아닙니다.\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//		printf("숫자1과 숫자2가 같습니다.\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if(score > 90) {
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다.\n");
//	}
//	else {
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0) {
//		printf("number는 음수입니다.\n");
//	}
//	else {
//		printf("number는 0입니다.\n");
//	}
//	
//	if (number % 2 == 0)
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}

//22p 문제5
//#include <stdio.h>
//int main()
//{
//	char a;
//
//	printf("w, a, d, s 중 1개를 입력해주세요. ==> ");
//	scanf("%c", &a);
//
//	if (a == 'w')
//		printf("위 방향키를 입력하셨습니다.\n");
//	else if (a == 'a')
//		printf("좌 방향키를 입력하셨습니다.\n");
//	else if (a == 'd')
//		printf("우 방향키를 입력하셨습니다.\n");
//	else if (a == 's')
//		printf("아래 방향키를 입력하셨습니다.\n");
//
//	return 0;
//}

//22p 문제6
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int gauge = rand() % 101;
//
//	if (gauge >= 45 && gauge <= 55)
//		printf("%d 점 입니다. perfect", gauge);
//	else if (gauge >= 35 && gauge <= 65)
//		printf("%d 점 입니다. excellent", gauge);
//	else
//		printf("%d 점 입니다. good", gauge);
//
//	return 0;
//}

//22p 문제7
//#include <stdio.h>
//
//int main()
//{
//	int input;
//
//	printf("임의의 정수를 입력하세요. ==> ");
//	scanf("%d", &input);
//
//	if (input % 3 == 0) {
//		printf("입력한 정수는 3의 배수입니다.\n");
//		if (input % 6 == 0)
//			printf("입력한 정수는 6의 배수입니다.\n");
//		if (input % 9 == 0)
//			printf("입력한 정수는 9의 배수입니다.\n");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈 \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈 \n");
//	case 'm': printf("지도창 오픈 \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도창 오픈\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one \n"); break;
//	case 2: printf("two \n"); break;
//	case 3: printf("three \n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//				break;
//	case 'm':	printf("지도창 오픈\n");
//				break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//24p 문제1
//#include <stdio.h>
//void main()
//{
//	int a, b;
//	char oper;
//
//	printf("2개의 숫자를 입력하세요. ==> ");
//	scanf("%d %d", &a, &b);
//
//	printf(" '+' '-' '*' '/' '%%' 기호를 입력하세요. ==> ");
//	scanf(" %c", &oper);
//
//	switch (oper)
//	{
//	case '+': printf("%d + %d  = %d 입니다.\n", a, b, a + b); break;
//	case '-': printf("%d - %d  = %d 입니다.\n", a, b, a - b); break;
//	case '*': printf("%d * %d  = %d 입니다.\n", a, b, a * b); break;
//	case '/': printf("%d / %d  = %d 입니다.\n", a, b, a / b); break;
//	case '%': printf("%d %% %d  = %d 입니다.\n", a, b, a % b); break;
//	default: printf("다른 기호를 입력했습니다.\n"); break;
//	}
//}

//24p 문제2
//#include <stdio.h>
//void main()
//{
//	int month;
//
//	printf("1 ~ 12 숫자를 입력하세요.");
//	scanf("%d", &month);
//
//	switch (month)
//	{
//	case 1: printf("January \n"); break;
//	case 2: printf("February \n"); break;
//	case 3: printf("March \n"); break;
//	case 4: printf("April \n"); break;
//	case 5: printf("May \n"); break;
//	case 6: printf("June \n"); break;
//	case 7: printf("July \n"); break;
//	case 8: printf("August \n"); break;
//	case 9: printf("September \n"); break;
//	case 10: printf("October \n"); break;
//	case 11: printf("November \n"); break;
//	case 12: printf("December \n"); break;
//	default: printf("다른 값을 입력했습니다. \n"); break;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동 \n");
//	scanf("%c", &command);
//
//	switch (command)
//	{
//	case '<' :
//	case 'a' :
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>': case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}

//25p 문제4
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int input;
//	const int option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임, 2.이어하기, 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//25p 문제5
//#include <stdio.h>
//
//int main()
//{
//	int a;
//
//	printf("0 ~ 9 사이의 숫자를 입력하세요.");
//	scanf("%d", &a);
//
//	switch (a)
//	{
//	case 3:
//	case 6: 
//	case 9: printf("짝"); break;
//	}
//}

//26p 문제6
#include <stdio.h>

int main()
{
	char command = 'x';

	switch (command)
	{
	case 'x': printf("알파벳 x 입력.\n");
		break;
	case 'x': printf("엑스표 입력.\n");
		break;
	}
	return 0;
}