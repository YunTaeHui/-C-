//20 page ����4 (16����)
//#include <stdio.h>
//
//int main()
//{
//	char initial;
//
//	printf("���ڸ� �Է��ϼ���.\n");
//	scanf("%c", &initial);
//
//	if (initial >= 0x41 && initial <= 'Z')
//		printf("%c�� �빮�� �Դϴ�.\n", initial);
//	else if (initial >= 'a' && initial <= 'z')
//		printf("%c�� �ҹ��� �Դϴ�.\n", initial);
//	else
//		printf("���ĺ��� �ƴմϴ�.\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("����2�� ����1���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
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
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else if (number < answer)
//	{
//		printf("����2�� ����1���� Ů�ϴ�.\n");
//	}
//	else
//		printf("����1�� ����2�� �����ϴ�.\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if(score > 90) {
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80) {
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70) {
//		printf("������ C����Դϴ�.\n");
//	}
//	else if (score > 60) {
//		printf("������ D����Դϴ�.\n");
//	}
//	else {
//		printf("������ F����Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0) {
//		printf("number�� �����Դϴ�.\n");
//	}
//	else {
//		printf("number�� 0�Դϴ�.\n");
//	}
//	
//	if (number % 2 == 0)
//	{
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� Ȧ���Դϴ�.\n");
//	}
//	return 0;
//}

//22p ����5
//#include <stdio.h>
//int main()
//{
//	char a;
//
//	printf("w, a, d, s �� 1���� �Է����ּ���. ==> ");
//	scanf("%c", &a);
//
//	if (a == 'w')
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	else if (a == 'a')
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	else if (a == 'd')
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	else if (a == 's')
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//
//	return 0;
//}

//22p ����6
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
//		printf("%d �� �Դϴ�. perfect", gauge);
//	else if (gauge >= 35 && gauge <= 65)
//		printf("%d �� �Դϴ�. excellent", gauge);
//	else
//		printf("%d �� �Դϴ�. good", gauge);
//
//	return 0;
//}

//22p ����7
//#include <stdio.h>
//
//int main()
//{
//	int input;
//
//	printf("������ ������ �Է��ϼ���. ==> ");
//	scanf("%d", &input);
//
//	if (input % 3 == 0) {
//		printf("�Է��� ������ 3�� ����Դϴ�.\n");
//		if (input % 6 == 0)
//			printf("�Է��� ������ 6�� ����Դϴ�.\n");
//		if (input % 9 == 0)
//			printf("�Է��� ������ 9�� ����Դϴ�.\n");
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
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
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
//		printf("������â ���� \n");
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
//	case 'i': printf("������â ���� \n");
//	case 'm': printf("����â ���� \n");
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
//	case 'i': printf("������â ����\n");
//		break;
//	case 'm': printf("����â ����\n");
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
//	printf("Ŀ�ǵ带 �Է��ϼ���:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':	printf("������â ����\n");
//				break;
//	case 'm':	printf("����â ����\n");
//				break;
//	default: printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}

//24p ����1
//#include <stdio.h>
//void main()
//{
//	int a, b;
//	char oper;
//
//	printf("2���� ���ڸ� �Է��ϼ���. ==> ");
//	scanf("%d %d", &a, &b);
//
//	printf(" '+' '-' '*' '/' '%%' ��ȣ�� �Է��ϼ���. ==> ");
//	scanf(" %c", &oper);
//
//	switch (oper)
//	{
//	case '+': printf("%d + %d  = %d �Դϴ�.\n", a, b, a + b); break;
//	case '-': printf("%d - %d  = %d �Դϴ�.\n", a, b, a - b); break;
//	case '*': printf("%d * %d  = %d �Դϴ�.\n", a, b, a * b); break;
//	case '/': printf("%d / %d  = %d �Դϴ�.\n", a, b, a / b); break;
//	case '%': printf("%d %% %d  = %d �Դϴ�.\n", a, b, a % b); break;
//	default: printf("�ٸ� ��ȣ�� �Է��߽��ϴ�.\n"); break;
//	}
//}

//24p ����2
//#include <stdio.h>
//void main()
//{
//	int month;
//
//	printf("1 ~ 12 ���ڸ� �Է��ϼ���.");
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
//	default: printf("�ٸ� ���� �Է��߽��ϴ�. \n"); break;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//
//	printf("<, a ���� �̵� \n");
//	printf(">, d ������ �̵� \n");
//	scanf("%c", &command);
//
//	switch (command)
//	{
//	case '<' :
//	case 'a' :
//		printf("�������� �̵��մϴ�.\n");
//		break;
//	case '>': case 'd':
//		printf("���������� �̵��մϴ�.\n");
//		break;
//	}
//	return 0;
//}

//25p ����4
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int input;
//	const int option = 3;
//	printf("�޴��� �����ϼ���");
//	printf("1.�� ����, 2.�̾��ϱ�, 3.�ɼ�\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("�� ���� ����.\n");
//		break;
//	case 2:
//		printf("���̺� ������ �ε�.\n");
//		break;
//	case option:
//		printf("�ɼ� ����.\n");
//		break;
//	default:
//		printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}

//25p ����5
//#include <stdio.h>
//
//int main()
//{
//	int a;
//
//	printf("0 ~ 9 ������ ���ڸ� �Է��ϼ���.");
//	scanf("%d", &a);
//
//	switch (a)
//	{
//	case 3:
//	case 6: 
//	case 9: printf("¦"); break;
//	}
//}

//26p ����6
#include <stdio.h>

int main()
{
	char command = 'x';

	switch (command)
	{
	case 'x': printf("���ĺ� x �Է�.\n");
		break;
	case 'x': printf("����ǥ �Է�.\n");
		break;
	}
	return 0;
}