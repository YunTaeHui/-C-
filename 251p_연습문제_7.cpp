#include <stdio.h>

void main()
{
	int a, b;
	int lo, hi, i;

	printf("�� ���ڸ� �Է��ϼ���.");
	scanf("%d %d", &a, &b);

	printf("���۰� ==> %d\n", a);
	printf("���� ==> %d\n", b);

	if (a < b) {
		lo = a; hi = b;
	}
	else {
		lo = b; hi = a;
	}
	i = lo;
	while (i <= hi)
	{
		if (i % 2 != 0)
		{
			printf(" %2d", i);
		}
		i++;
	}
}