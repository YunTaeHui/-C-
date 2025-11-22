//기초_24p_문제1
//#include <stdio.h>
//int main()
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
//	return 0;
//}


//기초_24p_문제2
#include <stdio.h>
int main()
{
	int month;

	printf("1 ~ 12 숫자를 입력하세요.");
	scanf("%d", &month);

	switch (month)
	{
	case 1: printf("January \n"); break;
	case 2: printf("February \n"); break;
	case 3: printf("March \n"); break;
	case 4: printf("April \n"); break;
	case 5: printf("May \n"); break;
	case 6: printf("June \n"); break;
	case 7: printf("July \n"); break;
	case 8: printf("August \n"); break;
	case 9: printf("September \n"); break;
	case 10: printf("October \n"); break;
	case 11: printf("November \n"); break;
	case 12: printf("December \n"); break;
	default: printf("다른 값을 입력했습니다. \n"); break;
	}
	return 0;
}