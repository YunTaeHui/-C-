#include <stdio.h>

int main()
{
	int a, b, result;
	int WriteCount_0 = 0;

	printf("## �� ���� ������ ##\n");
	printf("ù��° ���� �Է��ϼ���. ==> ");
	scanf("%d", &a);

	while (1) {
		printf("�ι�° ���� �Է��ϼ���. ==> ");
		scanf("%d", &b);

		if (b != 0)
		{
			result = a / b;
			printf("%d / %d = %d �Դϴ�.\n", a, b, result);
			break;
		}
		else if (b == 0)
		{
			WriteCount_0++;

			if (WriteCount_0 == 3)
			{
				printf("0�� 3�� �Է��߽��ϴ�. �����մϴ�.\n");
				break;
			}
			else
				printf("�ι�° ���� 0�� %d �� �Է��߽��ϴ�. �ٽ� �Է��ϼ���.\n", WriteCount_0);
		}

	}
	return 0;
}