//42p_����1-1
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


//42p_����1-2
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


//42p_����1-3
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (;;) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("���α׷� ����\n");
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




//����_43p_����_2
//1: while(for_flag)���� for_flag == 1 �̹Ƿ� �ݺ��� ����, "number = 0" printf
//2: while(number++)���� number == 0 �̹Ƿ� �ݺ��� ������, number 1 ���� number = 1
//3: while(for_flag) �ݺ��� ������ number++����, number 1 ���� number = 2, 
//4: while(for_flag) �ݺ��� ������ ">>number = 2" printf
//5: while(for_flag) �ݺ��� ������ "number = 2" printf
//6: while(number++)���� number == 2(number>0) �̹Ƿ� �ݺ��� ����, number 1 ���� number = 3
//7: while(number++)���� number == 3 �̹Ƿ� ">number = 3" ���
//8: while(number++) �ݺ��� ������ if(number == 3) �̹Ƿ�, for_flag = 0, while(number++)�� break
//9: while(for_flag) �ݺ��� ������ number++���� number 1���� number = 4
//10: while(for_flag)���� ">> number = 4" printf
//11: for_flag == 0 �̹Ƿ�, while ���� �����, "for_flag=0, number=4" printf
//���:
//number = 0
//>> number = 2
//number = 2
// > number = 3
//>> number = 4
//0 4




//����_43p_����_3
//1: while(for_flag)���� for_flag == 1 �̹Ƿ� �ݺ��� ����, "number = 1" printf
//2: while(number++)����, number 1���� number = 2
//3: number > 0 �̹Ƿ�, while(number++) ���η� ����, ">number = 2" printf
//4: while(number++)����, number 1 ���� number = 3,
//5: while(number++)����, ">number = 3" printf
//6: while(number++) �ݺ��� ������ if(number == 3) �̹Ƿ�, for_flag = 0, while(number++)�� break
//7: while(for_flag) �ݺ��� ������ number++���� number 1���� number = 4
//8: while(for_flag)���� ">> number = 4" printf
//9: for_flag == 0 �̹Ƿ�, while ���� �����, "for_flag=0, number=4" printf
//���:
//number = 1
// > number = 2
// > number = 3
//>> number = 4
//0 4


//����_43p_����_4
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

//����_43p_����_5
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

//����_43p_����_6
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
//	printf("�Լ��ȿ��� ����\n");
//}
//int main()
//{
//	printf("������\n");
//	function_test1();
//	printf("������\n");
//	return 0;
//}


//#include <stdio.h>
//
//void eatFood()
//{
//	printf("��Ա�\n");
//}
//void goSleep()
//{
//	printf("���ڱ�\n");
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
//	printf("A : �ָӴϿ�");
//	printf("%d��\n", money);
//}
//void person_B()
//{
//	int money = 5000;
//	printf("B : �ָӴϿ�");
//	printf("%d��\n", money);
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
//	printf("���� ������ �� : ");
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
//	printf("%f ���� ����\n", result);
//	return 0;
//}
//float sendCard()
//{
//	printf("<ũ�������� ī��>\n");
//	printf("���: 0.7 ���� \n");
//	printf("������(����: ����) : ");
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
//	printf("���� �����?\n");
//	printf("%c%c%c\n", getB(), getE(), getE());
//	return 0;
//}


//��ȭ_10p_����_1
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
//	printf("����� �����?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(), getL(), getE());
//	return 0;
//}

//��ȭ_10p_����_2
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
//	printf("������ �����?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//	return 0;
//}


//#include <stdio.h>
//
//void makeHamburger(int count)
//{
//	printf("�ܹ��� %d�� ���Խ��ϴ�.\n", count);
//}
//
//int main()
//{
//	int ham_count;
//	printf("�ܹ��� �� �� �ֹ��Ͻðڽ��ϱ�?\n");
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
//		printf("�ֹ��� �� ���� �ܹ����Դϴ�.\n");
//		return 'C';
//	}
//	return type;
//}
//void makeHamburger(char type, int count) {
//	if (type == 'A') {
//		printf("AŸ�� �ܹ���");
//	}
//	else {
//		printf("BŸ�� �ܹ���");
//	}
//	printf("%d�� ���Խ��ϴ�.\n", count);
//}
//int main()
//{
//	char ham_type;
//	int ham_count;
//	printf("���Ÿ�� �ܹ��Ÿ�");
//	printf("�ֹ��Ͻðڽ��ϱ�?(A or B) \n");
//	scanf("%c", &ham_type);
//	if (rightType(ham_type) == 'C') {
//		return 0;
//	}
//	printf("�ܹ��Ÿ� �� �� �ֹ��Ͻðڽ��ϱ�?\n");
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
//	printf("��� : %d\n", data1);
//	return 0;
//}


//��ȭ_12p_����_1
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
//	printf("���� ��� : %d\n", data1);
//	printf("���� ��� : %d\n", data2);
//	printf("���� ��� : %d\n", data3);
//	printf("������ ��� : %.1f\n", data4);
//	return 0;
//}


#include <stdio.h>

int minus(int n)
{

}