//기초_22p_문제5
//'w'를 입력하면 '위 방향키를 입력하셨습니다.'
//'a'를 입력하면 '좌 방향키를 입력하셨습니다.'
//'d'를 입력하면 '우 방향키를 입력하셨습니다.'
//'s'를 입력하면 '아래 방향키를 입력하셨습니다.' 를 출력하라
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
//scanf로 0~100 사이의 gague를 입력받자.
//gauge가 50에 가까울수록 리듬게임에서 완벽한 타이밍에 버튼을 눌렀다는 의미이다.
//임의의 수 gauge가 45~55 범위이면 "Perfect"를 출력하고,
//35~65 범위이면 "Excellent"를 출력하고,
//그 외의 경우 "good"을 출력하는 프로그램을 만들어보자.
//단, 가장 높은 점수만이 출력되어야 한다.
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
//임의의 수 input이 3의 배수, 6의 배수, 9의 배수인지 if 문을 통해 확인하고,
//해당하는 전부를 화면에 출력하라.
//ex)input이 30일 때, 'input은 3의 배수입니다. input은 6의 배수입니다.'가 출력되어야 한다.
//(input % 3 == 0이면 3의 배수. 6과 9도 같은 방법)
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