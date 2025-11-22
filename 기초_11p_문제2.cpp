//기초_11p_문제1
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
#include <stdio.h>
int main()
{
	int A = 3, B = 5, H = 7;
	float TrapezoidArea = (A + B)*H/2;

	printf("사다리꼴의 넓이는 %.3f 입니다.\n", TrapezoidArea);
	
	return 0;
}