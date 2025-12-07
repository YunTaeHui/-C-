//209p
//[응용 6-14]를 수정하여 다음과 같이 각 단의 시작을 알리는 문구를 넣어보자.
#include <stdio.h>

void main()
{
	int i, k;

	for (i = 2; i <= 9; i++)
	{
		printf(" ## 제 %d 단 ## \n", i);
		for (k = 1; k <= 9; k++)
		{
			printf(" %d X %d = %d \n", i, k, i * k);
		}
		printf("\n");
	}
}