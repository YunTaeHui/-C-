//316p
//[응용 9-9]를 수정하여 "IT CookBook"을 반대 순서로 출력해보자.
#include <stdio.h>

void main()
{
	char s[12] = "IT CookBook";
	char* p;
	int i;

	p = s;

	for (i = sizeof(s) - 2; i >= 0; i--)
	{
		printf("%c", *(p + i));
	}
	printf("\n");
}