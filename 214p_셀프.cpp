//214p
//[그림6-10]의 소스를 활용하여 1~100의 합계를 구하는 프로그램을 작성해보자.
#include <stdio.h>

void main()
{
	int hap = 0;
	int i = 0;

	for (; i <= 100;)
	{
		hap += i;
		i++;
	}
	printf("%d \n", hap);
}