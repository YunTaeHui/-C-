//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요");
//	printf("안녕하세요\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("사과 %d 개 \n", apple);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int Keyboard = 3;
//	int Mause = 2;
//
//	printf("키보드 %d 개\n", Keyboard);
//	printf("마우스 %d 개\n", Mause);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f.. \n", pi, e);
//	return 0;
//}

////Page-11 문제 1
////반지름의 길이가 5인, 원의 넓이와 원의 둘레를 구하세요.
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
//}

//Page-11 문제 2
//밑변의 길이가 3이고, 윗변의 길이가 5이고, 높이가 7인
//사다리꼴의 넓이를 구하세요.
//#include <stdio.h>
//int main()
//{
//	int A = 3, B = 5, H = 7;
//	float TrapezoidArea = (A + B)*H/2;
//
//	printf("사다리꼴의 넓이는 %.3f 입니다.\n", TrapezoidArea);
//}

//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k);
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d 입니다.\n", y + x);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 2개 입력 : ");
//	scanf("%c %c", &a, &b);
//	printf("문자 출력 : %c %c\n", a, b);
//	return 0;
//}


//Page-12 문제 1
//반지름의 길이가 r인, 원의 넓이와 원의 둘레를 구하세요.
//(r 은 값을 입력받는다)
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

//Page-11 문제 2
//밑변의 길이가 W1이고, 윗변의 길이가 W2이고, 높이가 H인
//사다1리꼴의 넓이를 구하세요.
//(W1, W2, H는 값을 입력받는다)
//#include <stdio.h>
//int main()
//{
//	float W1, W2, H;
//	double TrapezoidArea;
//
//	printf("밑변, 윗변, 높이 의 길이를 입력하세요.");
//	scanf("%f %f %f", &W1, &W2, &H);
//
//	TrapezoidArea = (W1 + W2) * H / 2.0;
//
//	printf("사다리꼴의 넓이는 %.2lf 입니다.\n", TrapezoidArea);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//}

//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	number = number + 3;	printf("%2d\n", number);
//	number -= 2;			printf("%2d\n", number);
//	number--;				printf("%2d\n", number);
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}


//Page-13 문제1
//변수 2가지를 정한 뒤 + - * / % 값을 출력하세요
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	printf("변수 2개를 입력하세요 : ");
//	scanf("%d %d", &a, &b);
//
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);	//실수일때 어떻게 변환해서 출력했는지 프로그램 찾기
// 
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = 1%%4\n", number1);
//	printf("%d = 5%%3\n", number2);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//
//	return 0;
//}

//Page-14 문제2
//임의의 값을 입력했을때, 50으로 나눈 나머지를 출력하는 프로그램을 만드세요.
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("임의의 숫자를 입력하세요.");
//	scanf("%d", &a);
//
//	printf("%d 를 50으로 나눈 값은 %d 입니다.\n", a, a % 50);
// 
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d = 6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d = 6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d = 6/4\n", data3);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int coin;
//	printf("금액을 입력하세요.");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}

//Page-15 문제3
//1000원 미만의 젤리를 사려고 한다.
//젤리 가격을 입력했을때, 1000원에 대한 거스름돈을 동전별로 출력하세요.
//#include <stdio.h>
//int main()
//{
//	int Jelly;
//	printf("젤리 금액을 입력하세요.");
//	scanf("%d", &Jelly);
//
//	int Change = 1000 - Jelly;
//
//	int Won500 = Change / 500;
//	Change %= 500;
//	int Won100 = Change / 100;
//	Change = Change % 100;
//	int Won50 = Change / 50;
//	Change = Change % 50;
//	int Won10 = Change / 10;
//	Change = Change % 10;
//
//	printf("거스름 돈 : 500원 동전 %d개 \n", Won500);
//	printf("거스름 돈 : 100원 동전 %d개 \n", Won100);
//	printf("거스름 돈 : 50원 동전 %d개 \n", Won50);
//	printf("거스름 돈 : 10원 동전 %d개 \n", Won10);
//	printf("나머지 거스름 돈 : %d 원 입니다.\n", Change);
//
//	return 0;
//}

//#include <stdio.h>


