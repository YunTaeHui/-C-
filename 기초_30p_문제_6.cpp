#include <stdio.h>

void main()
{
	int count;
	int hap = 0;
	int turn = 1;

	while (1)
	{
		printf("숫자를 입력하세요 ==> ");
		scanf("%d", &count);

		if (count > 3)
		{
			printf("숫자는 3까지만 입력하세요.\n");
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
				printf("B랑 C가 이겼습니다!");
				break;
			}
			else if (turn % 3 == 2)
			{
				printf("C랑 A가 이겼습니다!");
				break;
			}
			else
			{
				printf("A랑 B가 이겼습니다!");
				break;
			}
		}
	}
}