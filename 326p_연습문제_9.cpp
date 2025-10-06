#include <stdio.h>
#include <string.h>

int main()
{
	char s[25] = "ITCookBookHanbitNetwork";
	int tmp;
	int count, i, k;

	char* p;

	p = s;

	count = strlen(s);

	printf("정렬 전 배열 s ==> ");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + i));
	}
	printf("\n");

	for (i = 0; i < count; i++)
	{
		for (k = i + 1; k < count; k++)
		{
			if (*(p + i) > *(p + k))
			{
				tmp = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = tmp;
			}
		}
	}
	printf("정렬 후 배열 s ==> ");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + count - (i + 1)));
	}
	printf("\n");

	return 0;
}