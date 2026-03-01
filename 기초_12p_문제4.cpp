//기초_12p_문제3
//반지름의 길이가 r인 원의 넓이와 원의 길이를 구하여 출력하라.
//(r은 scanf를 이용해서 값을 받는다)
//#include <stdio.h>
//int main()
//{
//	int r;
//	float pi, Circumference, CicleArea;
//	
//	printf("반지름의 길이를 입력하세요.");
//	scanf("%d", &r);
//
//	pi = 3.141592;
//	Circumference = 2 * r * pi;
//	CicleArea = pi * r * r;
//
//	printf("원의 넓이는 %.3f 입니다.\n", CicleArea);
//	printf("원의 둘레는 %.3f 입니다.\n", Circumference);
//	
//	return 0;
//}


//기초_12p_문제4
//밑변의 길이가 W1이고 윗변의 길이가 W2이고 높이가 H인 사다리꼴의 넓이를 구하여 출력하라.
//(W1, W2, H는 scanf를 이용하여 값을 받는다.)
#include <stdio.h>
int main()
{
	float W1, W2, H;
	double TrapezoidArea;

	printf("밑변, 윗변, 높이 의 길이를 입력하세요.");
	scanf("%f %f %f", &W1, &W2, &H);

	TrapezoidArea = (W1 + W2) * H / 2.0;

	printf("사다리꼴의 넓이는 %.2lf 입니다.\n", TrapezoidArea);

	return 0;
}