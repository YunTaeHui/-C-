//기초_30p_문제4
//#include <stdio.h>
//
//int main()
//{
//	int number = 1, multi = 1;
//
//	while (1)
//	{
//		multi = multi * number;
//		if (multi >= 50000) {
//			break;
//		}
//		number++;
//	}
//	printf("multi가 50000 처음 이상인 경우 number 값 : %d \n", number);
//	printf("number가 %d 일때, multi 값 : %d \n", number, multi);
//	
//	return 0;
//}


//기초_30p_문제5
//#include <stdio.h>
//
//int main()
//{
//	char ch = 'A';
//
//	while (ch <= 'Z')
//	{
//		if (ch != 'F')
//			printf("%c ", ch);
//		ch++;
//
//	}
//	return 0;
//}


//기초_30p_문제6
#include <stdio.h>

int main()
{
	int count;
	int hap = 0;
	int turn = 0;

	while (1)
	{
		printf("%c : ", 'A' + turn);
		scanf("%d", &count);

		if (count > 3) {
			printf("숫자는 3까지만 입력하세요.\n");
			continue;
		}
		hap = hap + count;
		printf("=> %d\n", hap);

		//turn = !turn;

		if (hap >= 31)
		{
			break;
		}
		turn = ++turn % 2;
	}
	printf("%c가 졌습니다!", 'A' + turn);
	return 0;
}