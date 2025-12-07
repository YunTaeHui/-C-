//240p
//[응용 7-9]에서 사용한 for문을 while문으로 변경해보자.
#include <stdio.h>

void main()
{
	int hap = 0;
	int i = 1;

	while (i <= 100)
	{
		hap = hap + i;

		if (hap >= 1000)
			break;
		i++;
	}
	printf(" 1~100의 합에서 최초로 1000이 넘는 위치는? : %d\n", i);
}