#include <stdio.h>

int main()
{
	int Num;
	int i = 1, digit = 0;
	int result = 0, j = 1, k = 1, l;
	int coin, star;

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
		if (j < digit)
			result = 10 * k;
	}
	printf("%d �� ȯ���ϸ� %d �Դϴ�.\n", Num, result);

	int Num5 = Num / result;
	Num = Num % result;
	int Num1000 = Num / 1000;
	Num = Num % 1000;
	int Num100 = Num / 100;
	Num = Num % 100;
	int Num10 = Num / 10;
	Num = Num % 10;

	printf("%d\n", Num5);
	printf("%d\n", Num1000);
	printf("%d\n", Num100);
	printf("%d\n", Num10);
	printf("%d\n", Num);

	l = 0;
	while (l < Num5)
	{
		printf("\u2665");
		l++;
	}
	printf("\n");

	l = 0;
	while (l < Num1000)
	{
		printf("\u2665");
		l++;
	}
	printf("\n");

	l = 0;
	while (l < Num100)
	{
		printf("\u2665");
		l++;
	}
	printf("\n");

	l = 0;
	while (l < Num10)
	{
		printf("\u2665");
		l++;
	}
	printf("\n");

	l = 0;
	while (l < Num)
	{
		printf("\u2665");
		l++;
	}
	printf("\n");

	return 0;
}
