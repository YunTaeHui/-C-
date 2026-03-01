//381p
//c:\temp\data3.txt에 실수 여덟 줄을 입력하고 저장하자. 그리고 여덟 줄의 실수 합계가
//나오도록 [기본 11-9]를 수정해보자.
#include <stdio.h>

int main()
{
	FILE* rfp;
	double in, hap = 0.0;
	int i;

	rfp = fopen("data3.txt", "r");

	for (i = 0; i < 8; i++)
	{
		fscanf(rfp, "%lf", &in);
		hap = hap + in;
	}
	printf("합계 ==> %7.2f\n", hap);

	fclose(rfp);
	return 0;
}