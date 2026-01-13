//기초_24p_문제1
//scanf로 input1, input2에 숫자를 입력받고, oper에 임의의 기호 +,-,*,/,%를 입력받아
//계산하는 프로그램을 switch를 사용하여 작성하라.
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
//scanf로 month에 숫자를 입력받아 month에 해당되는 영어단어를 출력하는 프로그램을 작성하라.(ex) 1 > January
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