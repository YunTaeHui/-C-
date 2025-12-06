//심화_10p_문제1
//사과를 영어로? 나타내는 프로그램을 만들어보자.
//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getM() { return 'M'; }
//char getN() { return 'N'; }
//char getP() { return 'P'; }
// 
//int main()
//{
//	printf("사과를 영어로?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(), getL(), getE());
//	return 0;
//}


//심화_10p_문제2
//위의 예제를 이용하여 "왼쪽을 영어로?"를 출력해보자.
#include <stdio.h>

char getA() { return 'A'; }
char getE() { return 'E'; }
char getF() { return 'F'; }
char getL() { return 'L'; }
char getM() { return 'M'; }
char getN() { return 'N'; }
char getP() { return 'P'; }
char getT() { return 'T'; }

int main()
{
	printf("왼쪽을 영어로?\n");
	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
	return 0;
}