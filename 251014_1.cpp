//#include <stdio.h>
//
//int main()
//{
//	int exitFor, number;
//	printf("1���� 10���� ���� �� ��� : ");
//	for (number = 10, exitFor = number - 1;
//		exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

//����_37p_����_4
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	for (i = 11; i <= 200; i += 11)
//	{
//		printf("%d \n", i);
//	}
//	return 0;
//}

//����_37p_����_5
//#include <stdio.h>
//
//int main()
//{
//	float sqLine;
//	float circum;
//
//	for (sqLine = 0.1f; sqLine <= 21.0/4; sqLine += 0.1f)
//	{
//		circum = sqLine * 4.0f;
//		printf("%.2f\n", circum);
//	}
//}

//7
//#include <stdio.h>
//
//void main()
//{
//	int a, b;
//	int lo, hi, i;
//
//	printf("�� ���ڸ� �Է��ϼ���.");
//	scanf("%d %d", &a, &b);
//
//	printf("���۰� ==> %d\n", a);
//	printf("���� ==> %d\n", b);
//
//	if (a < b) {
//		lo = a; hi = b;
//	}
//	else {
//		lo = b; hi = a;
//	}
//	i = lo;
//	while (i <= hi)
//	{
//		if (i % 2 != 0)
//		{
//			printf(" %2d", i);
//		}
//		i++;
//	}
//}


//8
//#include <stdio.h>
//
//void main()
//{
//	char str[100];
//	char ch;
//
//	int i, k;
//	int star;
//
//	printf("���ڸ� ������ �Է� : ");
//	scanf("%s", str);
//
//	i = 0;
//	ch = str[i];
//	while (ch != '\0') {
//		star = (int)ch - 48;
//
//		k = 0;
//		while (k < star * 2)
//		{
//			printf("\u2665");
//			k++;
//		}
//		printf("\n");
//		i++;
//		ch = str[i];
//	}
//}


#include <stdio.h>

int main()
{
	int Num;
	int i = 1, digit = 0;
	int result = 0, j = 1, k = 1;
	int result_1 = 0;
	int coin;

	printf("���ڸ� ������ �Է� : ");
	scanf("%d", &Num);

	while (1) {
		i *= 10;
		if (Num % i != 0)
		{
			digit++;
		}
		if (i > Num)
			break;
	}
	printf("%d �� %d �ڸ��� �Դϴ�.\n", Num, digit);

	while (1) {
		if (j < digit)
		{
			k *= 10;
			j++;
		}
		else
			break;
		if(j<digit)
			result = 10 * k;
	}
	printf("%d �� ȯ���ϸ� %d �Դϴ�.\n", Num, result);

	int l = 0;
	while (l < (Num / result))
	{
		l++;
	}
	printf("%d", l);

	int coin = 0;
	int coin10000 = coin / 10000;
		coin = coin % 10000;
	int coin1000 = coin / 1000;
		coin = coin % 1000;
	int coin100 = coin / 100;
		coin = coin % 100;
	int coin10 = coin / 10;
		coin = coin % 10;
	int coin;

	return 0;
}