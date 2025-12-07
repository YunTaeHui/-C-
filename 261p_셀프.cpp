//261p
//for문 대신 while 문을 사용하여 [응용8-3]을 변수 10개일 때로 수정해보자.
#include <stdio.h>

void main()
{
	int aa[10];
	int hap = 0;
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d번째 숫자를 입력하세요 : ", i + 1);
		scanf("%d", &aa[i]);

		i++;
	}
	hap = aa[0] + aa[1] + aa[2] + aa[3] + aa[4] + aa[5] + aa[6] + aa[7] + aa[8] + aa[9];

	printf("합계 ==> %d \n", hap);
}