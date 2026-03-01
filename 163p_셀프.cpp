//163p
//[기본5-3]의 7행을 9행과 10행이 실행되도록 수정해보자.
#include <stdio.h>

void main()
{
	int a = 200;

	if (a > 100)
	{
		printf("100보다 작군요..\n");
		printf("거짓이므로 앞의 문장은 안보이겠죠?\n");
	}

	printf("프로그램 끝!\n");
}