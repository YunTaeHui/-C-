#include <stdio.h>

void main()
{
	char str[100];
	char ch;

	int i, k;
	int star;

	printf("숫자를 여러 개 입력 : ");
	scanf("%s", str);

	i = 0;
	ch = str[i];
	while (ch != '\0') {
		star = (int)ch - 48;

		k = 0;
		while (k < star * 2)
		{
			printf("\u2665");
			k++;
		}
		printf("\n");
		i++;
		ch = str[i];
	}
}