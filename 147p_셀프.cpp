//147p
//[응용 4-15]를 수정하여 3을 왼쪽으로 10번 시프트하는 프로그램을 작성해보자.
#include <stdio.h>

void main()
{
	int a = 3, result;
	int i;

	for (i = 1; i <= 10; i++)
	{
		result = a << i;
		printf("%d << %d = %d\n", a, i, result);
	}
}