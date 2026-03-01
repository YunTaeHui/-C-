//125p
//[기본4-1]의 17행의 결과가 실수가 되도록 수정해보자.
#include <stdio.h>

void main()
{
	int a, b = 5, c = 3;
	float d;

	a = b + c;
	printf("%d + %d = %d \n", b, c, a);

	a = b - c;
	printf("%d - %d = %d \n", b, c, a);

	a = b * c;
	printf("%d * %d = %d \n", b, c, a);

	d = b / (float)c;
	printf("%d / %d = %f \n", b, c, d);

	a = b % c;
	printf("%d %% %d = %d \n", b, c, a);
}