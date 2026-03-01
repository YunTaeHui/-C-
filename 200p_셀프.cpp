//200p
//[응용 6-9]를 수정하여 1~100중에서 3의 배수를 더하는 프로그램을 작성해보자.
#include <stdio.h>

void main()
{
	int hap = 0;
	int i;

	for (i = 3; i <= 100; i += 3) {
		hap += i;
	}

	printf("1에서 100까지 3의 배수의 합 : %d \n", hap);
}