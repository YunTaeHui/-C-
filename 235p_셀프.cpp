//235p
//[응용 7-2]를 do~while 문으로 변경해보자.
#include <stdio.h>

void main()
{
	int hap = 0;
	int i;

	i = 1;

	do
	{
		hap = hap + i;
		i++;
	} while (i <= 10);

	printf("1에서 10까지의 합 : %d \n", hap);
}