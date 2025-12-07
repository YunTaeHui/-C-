//266p
//배열 aa에는 3의 배수를 입력하고 배열 bb에는 50개의 배열 aa를 시프트(이동)한 값을 입력하도록
//[응용 8-5]를 수정해보자. 즉 bb[0] = aa[50], bb[99] = aa[49]와 같이 입력되게 한다.
#include <stdio.h>

void main()
{
	int aa[100], bb[100];
	int i;

	for (i = 0; i < 100; i++)
	{
		aa[i] = i * 3;
	}
	for (i = 0; i < 100; i++)
	{
		if (i >= 100)
			i = 0;
		bb[i] = aa[(i + 50) % 100];
	}
	printf("bb[0]는 %d, bb[99]는 %d 입력됨\n", bb[0], bb[99]);
}