//기초_26p_문제6
//위의 코드를 작동하게 수정하라.(case만 수정)
#include <stdio.h>

int main()
{
	char command = 'x';

	switch (command)
	{
	case 'x': printf("알파벳 x 입력.\n");
		break;
	case 'X': printf("엑스표 입력.\n");
		break;
	}
	return 0;
}