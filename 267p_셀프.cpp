//267p
//[기본8-6]을 수정하여 배열 aa에 들어 있는 전체 값의 합을 계산하는 프로그램을 작성해보자.
//for(i=0; i < count; i++)를 활용한다.
#include <stdio.h>

void main()
{
	int aa[] = { 10, 20, 30, 40, 50 };
	int count, i, hap;

	count = sizeof(aa) / sizeof(int);

	hap = 0;
	for (i = 0; i < count; i++)
	{
		hap = hap + aa[i];
	}

	printf("배열 aa[] 요소의 전체 합은 %d 입니다.\n", hap);
}