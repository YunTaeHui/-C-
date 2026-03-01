//403p
//정수가 아닌 실수의 합을 구하도록 [응용 12-3]을 수정해보자.
#include <stdio.h>
#include <malloc.h>

int main()
{
	double* p;
	int i = 0;
	double hap = 0.0;
	int cnt;

	printf("입력할 개수는 ? ");
	scanf("%d", &cnt);

	p = (double*)malloc(sizeof(double) * cnt);

	for (i = 0; i < cnt; i++)
	{
		printf(" %d 번째 숫자 : ", i + 1);
		scanf("%lf", p + i);
	}
	for (i = 0; i < cnt; i++)
		hap = hap + p[i];

	printf("입력 숫자 합 ==> %f\n", hap);

	free(p);

	return 0;
}