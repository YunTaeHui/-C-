//370p
//[응용 11-4]는 비밀번호를 입력할 때 모니터에 아무것도 나타나지 않는다.
//이를 ****와 같은 포시가 나오도록 수정해보자.
#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
	char password[5] = "5678";
	char input[5];
	int i;

	printf("비밀번호 4글자를 입력하세요 : ");
	for (i = 0; i < 4; i++)
	{
		input[i] = getch();
		putch('*');
	}

	if (strncmp(password, input, 4) == 0)
	{
		printf("\n 비밀번호 통과 ! \n");
	}
	else
	{
		printf("\n 입력한 비밀번호 ");

		for (i = 0; i < 4; i++)
			putch(input[i]);

		printf(" 가 틀렸음\n");
	}
}