//42p_문제1-1
//#include <stdio.h>
//
//int main()
//{
//	for (float conversion = 0; conversion < 2; conversion += 0.1)
//	{
//		printf("%.1f\n", conversion);
//	}
//	return 0;
//}


//42p_문제1-2
//#include <stdio.h>
//int main()
//{
//	double conversion = 90;
//	while (conversion > 0.1) {
//
//		if (conversion == 10) {
//			conversion /= 3;
//			continue;
//		}
//
//		printf("%.3lf\n", conversion);
//		conversion /= 3;
//	}
//	return 0;
//}


//42p_문제1-3
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (;;) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}




//기초_43p_문제_2
//1: while(for_flag)에서 for_flag == 1 이므로 반복문 진입, "number = 0" printf
//2: while(number++)에서 number == 0 이므로 반복문 미진입, number 1 증가 number = 1
//3: while(for_flag) 반복문 내부의 number++에서, number 1 증가 number = 2, 
//4: while(for_flag) 반복문 내부의 ">>number = 2" printf
//5: while(for_flag) 반복문 내부의 "number = 2" printf
//6: while(number++)에서 number == 2(number>0) 이므로 반복문 진입, number 1 증가 number = 3
//7: while(number++)에서 number == 3 이므로 ">number = 3" 출력
//8: while(number++) 반복문 내부의 if(number == 3) 이므로, for_flag = 0, while(number++)문 break
//9: while(for_flag) 반복문 내부의 number++에서 number 1증가 number = 4
//10: while(for_flag)에서 ">> number = 4" printf
//11: for_flag == 0 이므로, while 문을 벗어나서, "for_flag=0, number=4" printf
//결과:
//number = 0
//>> number = 2
//number = 2
// > number = 3
//>> number = 4
//0 4




//기초_43p_문제_3
//1: while(for_flag)에서 for_flag == 1 이므로 반복문 진입, "number = 1" printf
//2: while(number++)에서, number 1증가 number = 2
//3: number > 0 이므로, while(number++) 내부로 진입, ">number = 2" printf
//4: while(number++)에서, number 1 증가 number = 3,
//5: while(number++)에서, ">number = 3" printf
//6: while(number++) 반복문 내부의 if(number == 3) 이므로, for_flag = 0, while(number++)문 break
//7: while(for_flag) 반복문 내부의 number++에서 number 1증가 number = 4
//8: while(for_flag)에서 ">> number = 4" printf
//9: for_flag == 0 이므로, while 문을 벗어나서, "for_flag=0, number=4" printf
//결과:
//number = 1
// > number = 2
// > number = 3
//>> number = 4
//0 4


//기초_43p_문제_4
//#include <stdio.h>
//
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	for (; for_flag;) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//기초_43p_문제_5
//#include <stdio.h>
//
//int main()
//{
//	int for_flag = 1;
//	int number = 1;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		for (; number++;) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//기초_43p_문제_6
//#include <stdio.h>
//
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	for (; for_flag;) {
//		printf("number = %d\n", number);
//		for (; number++;) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}


//#include <stdio.h>
//
//int suyel(int n)
//{
//	int sum = 0;
//	for (int x = 0; x <= n; x++)
//	{
//		sum += x;
//	}
//	return sum;
//}
//int main()
//{
//	int result = suyel(10);
//	printf("%d\n", result);
//
//	return 0;
//}


//#include <stdio.h>
//
//void function_test1()
//{
//	printf("function_test1()");
//	printf("함수안에서 실행\n");
//}
//int main()
//{
//	printf("실행전\n");
//	function_test1();
//	printf("실행후\n");
//	return 0;
//}


//#include <stdio.h>
//
//void eatFood()
//{
//	printf("밥먹기\n");
//}
//void goSleep()
//{
//	printf("잠자기\n");
//}
//int main()
//{
//	eatFood(); goSleep();
//	eatFood(); eatFood();
//	goSleep(); goSleep();
//
//	return 0;
//}


//#include <stdio.h>
//
//void person_A()
//{
//	int money = 10000;
//	printf("A : 주머니에");
//	printf("%d원\n", money);
//}
//void person_B()
//{
//	int money = 5000;
//	printf("B : 주머니에");
//	printf("%d원\n", money);
//}
//int main()
//{
//	person_A();
//	person_B();
//
//	return 0;
//}


//#include <stdio.h>
//int function_test2()
//{
//	int testNumber = 5;
//	return testNumber;
//}
//int main()
//{
//	int getNumber;
//	getNumber = function_test2();
//	printf("function_test2()");
//	printf("에서 가져온 값 : ");
//	printf("%d\n", getNumber);
//}


//#include <stdio.h>
//
//void sayHi() {
//	printf("hi");
//	return;
//}
//char getA() {
//	return 'A';
//}
//int get5() {
//	return 5;
//}
//double set1get5(int one) {
//	return one + 4.0;
//}
//void main() {
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}


//#include <stdio.h>
//
//void sayHi();
//char getA();
//int get5();
//double set1get5(int one);
//
//void main()
//{
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}
//
//void sayHi() {
//	printf("hi");
//	return;
//}
//char getA() {
//	return 'A';
//}
//int get5() {
//	return 5;
//}
//double set1get5(int one) {
//	return one + 4.0;
//}


//#include <stdio.h>
//
//float sendCard();
//int main() {
//	float result = sendCard();
//	printf("%f 만원 받음\n", result);
//	return 0;
//}
//float sendCard()
//{
//	printf("<크리스마스 카드>\n");
//	printf("비용: 0.7 만원 \n");
//	printf("돈내기(단위: 만원) : ");
//	int manwon;
//	scanf("%d", &manwon);
//	float change = manwon - 0.7;
//	return change;
//}


//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//int main()
//{
//	printf("벌을 영어로?\n");
//	printf("%c%c%c\n", getB(), getE(), getE());
//	return 0;
//}


//심화_10p_문제_1
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

//심화_10p_문제_2
//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getM() { return 'M'; }
//char getN() { return 'N'; }
//char getP() { return 'P'; }
//char getT() { return 'T'; }
//
//int main()
//{
//	printf("왼쪽을 영어로?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//	return 0;
//}


//#include <stdio.h>
//
//void makeHamburger(int count)
//{
//	printf("햄버거 %d개 나왔습니다.\n", count);
//}
//
//int main()
//{
//	int ham_count;
//	printf("햄버거 몇 개 주문하시겠습니까?\n");
//	scanf("%d", &ham_count);
//	makeHamburger(ham_count);
//	return 0;
//}


//#include <stdio.h>
//void print_Number();
//void print_Number2(int num);
//void print_Number4_charB(int num, char b);
//void print_charaterX(char X);
//
//int main()
//{
//	print_Number();
//	print_Number2(2);
//	print_Number4_charB(4, 'b');
//	print_charaterX('X');
//	return 0;
//}
//void print_Number()
//{
//	printf("Number\n");
//}
//void print_Number2(int num)
//{
//	printf("Number : %d\n", num);
//}
//void print_Number4_charB(int num, char b)
//{
//	printf("Number : %d.charater : %c\n", num, b);
//}
//void print_charaterX(char X)
//{
//	printf("charater : %c\n", X);
//}


//#include <stdio.h>
//char rightType(char type) {
//	if (type != 'A' && type != 'B') {
//		printf("주문할 수 없는 햄버거입니다.\n");
//		return 'C';
//	}
//	return type;
//}
//void makeHamburger(char type, int count) {
//	if (type == 'A') {
//		printf("A타입 햄버거");
//	}
//	else {
//		printf("B타입 햄버거");
//	}
//	printf("%d개 나왔습니다.\n", count);
//}
//int main()
//{
//	char ham_type;
//	int ham_count;
//	printf("어느타입 햄버거를");
//	printf("주문하시겠습니까?(A or B) \n");
//	scanf("%c", &ham_type);
//	if (rightType(ham_type) == 'C') {
//		return 0;
//	}
//	printf("햄버거를 몇 개 주문하시겠습니까?\n");
//	scanf("%d", &ham_count);
//	makeHamburger(ham_type, ham_count);
//	return 0;
//}


//#include <stdio.h>
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	printf("결과 : %d\n", data1);
//	return 0;
//}


//심화_12p_문제_1
//#include <stdio.h>
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//int sub_number(int num1, int num2)
//{
//	int retVal = num1 - num2;
//	return retVal;
//}
//int mul_number(int num1, int num2)
//{
//	int retVal = num1 * num2;
//	return retVal;
//}
//float div_number(int num1, int num2)
//{
//	float retVal = (float)num1 / num2;
//	return retVal;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	int data2 = sub_number(a, b);
//	int data3 = mul_number(a, b);
//	float data4 = div_number(a, b);
//
//	printf("덧셈 결과 : %d\n", data1);
//	printf("뺄셈 결과 : %d\n", data2);
//	printf("곱셈 결과 : %d\n", data3);
//	printf("나눗셈 결과 : %.1f\n", data4);
//	return 0;
//}


#include <stdio.h>

int minus(int n)
{

}