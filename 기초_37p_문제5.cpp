//기초_37p_문제4
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
#include <stdio.h>

int main()
{
	float sqLine;

	for (sqLine = 0; sqLine * 4 <= 21; sqLine += 0.1)
		printf("정사각형 둘레의 합이 21 이하인 sqLine은 %3.1f 입니다.\n", sqLine);
	return 0;
}