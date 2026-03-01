//기초_11p_문제1
//반지름의 넓이와 원의 둘레를 구하여 출력하라.(변수 4개 선언)
//#include <stdio.h>
//int main()
//{
//	double pi, Circumference, CicleArea;
//	int Radian = 5;
//	pi = 3.141592;
//	Circumference = 2 * pi * Radian;
//	CicleArea = pi * Radian * Radian;
//
//	printf("원의 둘레는 %.3lf 입니다.\n", Circumference);
//	printf("원의 넓이는 %.3lf 입니다.\n", CicleArea);
//
//	return 0;
//}


//기초_11p_문제2
//밑변의 길이가 3이고, 윗변의 길이가 5이고, 높이가 7인 사다리꼴의 넓이를 구하여 출력하라. (변수 4개 선언)
#include <stdio.h>
int main()
{
	int A = 3, B = 5, H = 7;
	float TrapezoidArea = (A + B) * H / 2;

	printf("사다리꼴의 넓이는 %.3f 입니다.\n", TrapezoidArea);

	return 0;
}