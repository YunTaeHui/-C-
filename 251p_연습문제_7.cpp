#include <stdio.h>

void main()
{
	int a, b;
	int lo, hi, i;

	printf("두 숫자를 입력하세요.");
	scanf("%d %d", &a, &b);

	printf("시작값 ==> %d\n", a);
	printf("끝값 ==> %d\n", b);

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