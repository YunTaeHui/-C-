//251p_연습문제7
//제시된 실행 결과와 같이 입력한 두 수 사이의 홀수를 구하는 코드를 작성하세요. 단, 입력한 수가 큰 수부터 작은 수의
//순서로 출력되게 하고 반복문은 while 문을 사용하세요.
#include <stdio.h>

void main()
{
	int a, b;
	int lo, hi, i;

	printf("두 숫자를 입력하세요.");
	scanf("%d %d", &a, &b);

	printf("시작값 ==> %d\n", a);
	printf("끝값 ==> %d\n", b);

	if (a < b) {
		lo = a; hi = b;
	}
	else {
		lo = b; hi = a;
	}
	i = lo;
	while (i <= hi)
	{
		if (i % 2 != 0)
		{
			printf(" %2d", i);
		}
		i++;
	}
}