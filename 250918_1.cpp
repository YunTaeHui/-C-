//#include <stdio.h>
//
//int main()
//{
//	printf("�ȳ��ϼ���");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n�ȳ��ϼ���\n�ȳ��ϼ���\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n");
//	printf("�ȳ��ϼ���");
//	printf("�ȳ��ϼ���\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("��� 1��\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("��� %d �� \n", apple);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("Ű���� 3��\n");
//	printf("���콺 2��\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int Keyboard = 3;
//	int Mause = 2;
//
//	printf("Ű���� %d ��\n", Keyboard);
//	printf("���콺 %d ��\n", Mause);
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

////Page-11 ���� 1
////�������� ���̰� 5��, ���� ���̿� ���� �ѷ��� ���ϼ���.
//#include <stdio.h>
//int main()
//{
//	double pi, Circumference, CicleArea;
//	int Radian = 5;
//	pi = 3.141592;
//	Circumference = 2 * pi * Radian;
//	CicleArea = pi * Radian * Radian;
//
//	printf("���� �ѷ��� %.3lf �Դϴ�.\n", Circumference);
//	printf("���� ���̴� %.3lf �Դϴ�.\n", CicleArea);
//}

//Page-11 ���� 2
//�غ��� ���̰� 3�̰�, ������ ���̰� 5�̰�, ���̰� 7��
//��ٸ����� ���̸� ���ϼ���.
//#include <stdio.h>
//int main()
//{
//	int A = 3, B = 5, H = 7;
//	float TrapezoidArea = (A + B)*H/2;
//
//	printf("��ٸ����� ���̴� %.3f �Դϴ�.\n", TrapezoidArea);
//}

//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("���ϴ� ���ڸ� �Է� : ");
//	scanf("%d", &k);
//	printf("�Է��� ���ڴ� : %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("���ϰ� ���� �� 2�� �Է� : ");
//	scanf("%d %d", &y, &x);
//	printf("�� ���� ���� %d �Դϴ�.\n", y + x);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("���� 2�� �Է� : ");
//	scanf("%c %c", &a, &b);
//	printf("���� ��� : %c %c\n", a, b);
//	return 0;
//}


//Page-12 ���� 1
//�������� ���̰� r��, ���� ���̿� ���� �ѷ��� ���ϼ���.
//(r �� ���� �Է¹޴´�)
//#include <stdio.h>
//int main()
//{
//	int r;
//	float pi, Circumference, CicleArea;
//	
//	printf("�������� ���̸� �Է��ϼ���.");
//	scanf("%d", &r);
//
//	pi = 3.141592;
//	Circumference = 2 * r * pi;
//	CicleArea = pi * r * r;
//
//	printf("���� ���̴� %.3f �Դϴ�.\n", CicleArea);
//	printf("���� �ѷ��� %.3f �Դϴ�.\n", Circumference);
//	
//	return 0;
//}

//Page-11 ���� 2
//�غ��� ���̰� W1�̰�, ������ ���̰� W2�̰�, ���̰� H��
//���1������ ���̸� ���ϼ���.
//(W1, W2, H�� ���� �Է¹޴´�)
//#include <stdio.h>
//int main()
//{
//	float W1, W2, H;
//	double TrapezoidArea;
//
//	printf("�غ�, ����, ���� �� ���̸� �Է��ϼ���.");
//	scanf("%f %f %f", &W1, &W2, &H);
//
//	TrapezoidArea = (W1 + W2) * H / 2.0;
//
//	printf("��ٸ����� ���̴� %.2lf �Դϴ�.\n", TrapezoidArea);
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


//Page-13 ����1
//���� 2������ ���� �� + - * / % ���� ����ϼ���
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	printf("���� 2���� �Է��ϼ��� : ");
//	scanf("%d %d", &a, &b);
//
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);	//�Ǽ��϶� ��� ��ȯ�ؼ� ����ߴ��� ���α׷� ã��
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

//Page-14 ����2
//������ ���� �Է�������, 50���� ���� �������� ����ϴ� ���α׷��� ���弼��.
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("������ ���ڸ� �Է��ϼ���.");
//	scanf("%d", &a);
//
//	printf("%d �� 50���� ���� ���� %d �Դϴ�.\n", a, a % 50);
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
//	printf("�ݾ��� �Է��ϼ���.");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//
//	printf("������ %d��, ", coin10000);
//	printf("��õ���� %d��, ", coin5000);
//	printf("õ���� %d��, ", coin1000);
//	printf("�������� �����Դϴ�.");
//
//	return 0;
//}

//Page-15 ����3
//1000�� �̸��� ������ ����� �Ѵ�.
//���� ������ �Է�������, 1000���� ���� �Ž������� �������� ����ϼ���.
//#include <stdio.h>
//int main()
//{
//	int Jelly;
//	printf("���� �ݾ��� �Է��ϼ���.");
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
//	printf("�Ž��� �� : 500�� ���� %d�� \n", Won500);
//	printf("�Ž��� �� : 100�� ���� %d�� \n", Won100);
//	printf("�Ž��� �� : 50�� ���� %d�� \n", Won50);
//	printf("�Ž��� �� : 10�� ���� %d�� \n", Won10);
//	printf("������ �Ž��� �� : %d �� �Դϴ�.\n", Change);
//
//	return 0;
//}

//#include <stdio.h>


