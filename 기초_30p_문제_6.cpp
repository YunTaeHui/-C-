#include <stdio.h>

void main()
{
	int count;
	int hap = 0;
	int turn = 1;

	while (1)
	{
		printf("���ڸ� �Է��ϼ��� ==> ");
		scanf("%d", &count);

		if (count > 3)
		{
			printf("���ڴ� 3������ �Է��ϼ���.\n");
		}
		else {
			hap = hap + count;

			if (turn % 3 == 1)
			{
				printf("A: %d\n=> %d\n", count, hap);
			}
			else if (turn % 3 == 2)
			{
				printf("B: %d\n=> %d\n", count, hap);
			}
			else
			{
				printf("C: %d\n=> %d\n", count, hap);
			}
			if (hap < 31)
			{
				turn++;
			}

		}
		if (hap >= 31)
		{
			if (turn % 3 == 1)
			{
				printf("B�� C�� �̰���ϴ�!");
				break;
			}
			else if (turn % 3 == 2)
			{
				printf("C�� A�� �̰���ϴ�!");
				break;
			}
			else
			{
				printf("A�� B�� �̰���ϴ�!");
				break;
			}
		}
	}
}