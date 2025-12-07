//282p
//배열 aa에 1, 3, 5, 7, 9...와 같이 홀수를 입력하고 aa[2][3], aa[2][2], aa[2][1], ... 와 같이 반대 순서로 출력되도록
//[응용 8-15]를 수정해보자.
#include <stdio.h>

void main()
{
	int aa[3][4];
	int i, k;
	int odd = 1;
	int val = 1;

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			aa[i][k] = val;
			odd++;
			val = 2 * odd - 1;
		}
	}
	printf("a[2][3] 부터 a[0][0] 까지 출력 \n");

	for (i = 2; i >= 0; i--)
	{
		for (k = 3; k >= 0; k--)
		{
			printf("%3d", aa[i][k]);
		}
		printf("\n");
	}
}