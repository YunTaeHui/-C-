#include <stdio.h>
//#include <string.h>

int main()
{
	char ary[25] = "IT 1234 @$% CookBook";
	char* p;
	int i;
	p = ary;
	int diff = 'a' - 'A';

	for (i = sizeof(ary) - 2; i >= 0; i--)
	{
		if ('A' <= *(p + i) && *(p + i) <= 'Z')
			*(p + i) += diff;
		else if ('a' <= *(p + i) && *(p + i) <= 'z')
			*(p + i) -= diff;
		else *(p + i);

		printf("%c", *(p + i));
	}
	printf("\n");

	return 0;
}