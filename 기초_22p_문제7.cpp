//기초_22p_문제5
//#include <stdio.h>
//int main()
//{
//	char a;
//
//	printf("w, a, d, s 중 1개를 입력해주세요. ==> ");
//	scanf("%c", &a);
//
//	if (a == 'w')
//		printf("위 방향키를 입력하셨습니다.\n");
//	else if (a == 'a')
//		printf("좌 방향키를 입력하셨습니다.\n");
//	else if (a == 'd')
//		printf("우 방향키를 입력하셨습니다.\n");
//	else if (a == 's')
//		printf("아래 방향키를 입력하셨습니다.\n");
//
//	return 0;
//}


//기초_22p_문제6
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int gauge = rand() % 101;
//
//	if (gauge >= 45 && gauge <= 55)
//		printf("%d 점 입니다. perfect", gauge);
//	else if (gauge >= 35 && gauge <= 65)
//		printf("%d 점 입니다. excellent", gauge);
//	else
//		printf("%d 점 입니다. good", gauge);
//
//	return 0;
//}


//기초_22p_문제7
#include <stdio.h>

int main()
{
	int input;

	printf("임의의 정수를 입력하세요. ==> ");
	scanf("%d", &input);

	if (input % 3 == 0) {
		printf("입력한 정수는 3의 배수입니다.\n");
		if (input % 6 == 0)
			printf("입력한 정수는 6의 배수입니다.\n");
		if (input % 9 == 0)
			printf("입력한 정수는 9의 배수입니다.\n");
	}
	return 0;
}