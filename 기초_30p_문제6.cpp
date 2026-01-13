//기초_30p_문제4
//while을 사용하여 number를 1부터 1씩 증가시켜 multi에 곱하자.(1*2*3*4...)
//곱한 값 multi가 처음 50000 이상이 된 때의 number 값을 출력하라.
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
//while을 사용하여 'A'부터 'Z'까지 알파벳을 출력하라. 단, 'F'는 출력되어선 안된다.
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
//while과 break를 사용하여 베스킨라빈스 게임을 만들어보자. 베스킨라빈스 게임은 다음의 방식으로 진행된다.
//1.두 사람이 0에서 시작하여 번갈아가며 숫자 1~3을 말한다.
//2. 더한 숫자가 31 또는 그 이상이 되면 멈춘다.
//3. 31 또는 그보다 큰 숫자를 말한 사람이 진다.
//scanf로 숫자를 입력받는다. 숫자가 31 또는 그 이상이 되면 반복문을 멈춘다.
//누가 이겼는지 출력한다.
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