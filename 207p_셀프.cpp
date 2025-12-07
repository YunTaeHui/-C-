//207p
//i 값이 2부터 9까지, k 값이 1부터 9까지 출력되도록 [기본 6-13]을 수정해보자.
//즉 72(8X9)행이 출력되어야 한다.
#include <stdio.h>

void main()
{
	int i, k;
	int count = 0;

	for (i = 2; i <= 9; i++)
	{
		for (k = 1; k <= 9; k++)
		{
			count++;
			printf("(i값: %d, k값: %d, 전체 행: %d)\n", i, k, count);
		}
	}
}