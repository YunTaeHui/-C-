//기초_37p_문제4
//200 이하의 11의 배수를 모두 출력하라.
//#include <stdio.h>
//
//int main()
//{
//	int Num;
//
//	for (Num = 0; Num <= 200; Num += 11)
//	{
//		if(Num>0)
//			printf("200이하의 11배수는 %d 입니다.\n", Num);
//	}
//	return 0;
//}


//기초_37p_문제5
//한 변의 길이가 sqLine인 정사각형이 있다. 정사각형의 둘레의 합이 21 이하인 sqLine의 값을 모두 출력하라.
//(정사각형의 둘레의 길이 공식 = sqLine * 4 단, sqLine은 소수 첫 번째 자리의 숫자이며,
//0.1부터 시작하여 반복시마다 0.1씩 늘어난다.)
#include <stdio.h>

int main()
{
	float sqLine;

	for (sqLine = 0; sqLine * 4 <= 21; sqLine += 0.1)
		printf("정사각형 둘레의 합이 21 이하인 sqLine은 %3.1f 입니다.\n", sqLine);
	return 0;
}