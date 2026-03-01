//312p
//[응용 9-7]을 char 형이 아닌 int 형으로 적절히 변경하여 다시 실행해보자.
#include <stdio.h>

void main()
{
	int ch;
	int* p;
	int* q;

	ch = 'A';
	p = &ch;

	q = p;
	*q = 'Z';

	printf("ch가 가지고 있는 값: ch ==> %c \n\n", ch);
}