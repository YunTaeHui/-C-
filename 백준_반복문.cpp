//N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��� ���Ŀ� ���缭 ����ϸ� �ȴ�.
//ù° �ٿ� N�� �־�����. N�� 1���� ũ�ų� ����, 9���� �۰ų� ����.
//������İ� ���� N * 1���� N * 9���� ����Ѵ�.
//#include <stdio.h>
//
//int main()
//{
//	int dan = 1;
//	scanf("%d", &dan);
//
//	for (int i = 1; i <= 9; i++)
//	{
//		printf("%d * %d = %d\n", dan, i, dan * i);
//	}
//	return 0;
//}


//n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.
//1���� n���� ���� ����Ѵ�.

//#include <stdio.h>
//
//int main()
//{
//	int a, i, hap = 0;
//	scanf("%d", &a);
//
//	for (i = 1; i <= a; i++)
//	{
//		hap = hap + i;
//	}
//	printf("%d\n", hap);
//	return 0;
//}


//������ ������ ���ݰ� ������ ����� �� �ݾ��� �������� ���� �� �ݾװ� ��ġ�ϴ��� �˻��غ���.
//ù° �ٿ��� �������� ���� �� �ݾ� X�� �־�����.
//��° �ٿ��� �������� ���� ������ ������ ������ �� N�� �־�����.
//���� N���� �ٿ��� �� ������ ���� a�� ���� b�� ������ ���̿� �ΰ� �־�����.
//#include <stdio.h>
//
//int main()
//{
//	int X;	//������ �� �ݾ�
//	int N;			//���� ���� ��
//	int total = 0;	//���� ��
//
//	scanf("%d", &X);
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++) {
//		int price;	//����
//		int cnt;	//����
//		scanf("%d %d", &price, &cnt);
//		total += price * cnt;
//	}
//
//	if (total == X)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//���ư� N����Ʈ �������� ������ �� �ִٰ� �����ؼ�
//ĥ�ǿ� �� ���� �ڷ����� �̸��� �����ϱ� ?
//ù ��° �ٿ��� ������ ���� N�� �־�����. (N�� 4�� ���)
//���ư� N����Ʈ �������� ������ �� �ִٰ� �����ϴ� ����
//�ڷ����� �̸��� ����Ͽ���.
//#include <stdio.h>
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int b = N / 4;
//
//	for (int i = 0; i < b; i++)
//	{
//		printf("long ");
//	}
//	printf("int\n");
//
//	return 0;
//}


//ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
//#include <stdio.h>
//
//int main()
//{
//	int star;
//	int line = 3;
//
//	scanf("%d", &line);
//	
//	for (int y = 0; y < line; y++)
//	{
//		for (star = 0; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//ù° �ٿ��� �� space + 1��, ��° �ٿ��� �� space + 2��, N��° �ٿ��� �� N���� ��� ����

#include <stdio.h>

int main()
{
	int star, space;
	int line;
	scanf("%d", &line);
	int x = 0;
	for (int y = line - 1; y >= 0; y--, x++)
	{
		for (space = 0; space < y; space++)
		{
			printf(" ");
		}
		for (star = 0; star <= x; star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}