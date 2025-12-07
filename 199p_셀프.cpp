//199p
//[기본 6-8]을 수정하여 1~12345의 합계를 구해보자.
#include <stdio.h>

void main()
{
	int hap = 0;
	int i;

	for (i = 0; i <= 12345; i++) {
		hap += i;
	}

	printf("1에서 12345 까지의 합 : %d \n", hap);
}