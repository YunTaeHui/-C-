//236p - 재귀함수 사용
//[응용 7-6]에서 사용한 do~while문을 중첩 if문으로 변경해보자.
#include <stdio.h>

int order()
{
	int menu;

	printf("\n 손님 주문하시겠습니까? \n");
	printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>그만 시킬래요 ==> ");
	scanf("%d", &menu);

	if (menu != 4)
	{
		if (menu == 1)
			printf("#카페라떼 주문하셨습니다.\n");
		else if (menu == 2)
			printf("#카푸치노 주문하셨습니다.\n");
		else if (menu == 3)
			printf("#아메리카노 주문하셨습니다.\n");
		else
			printf("잘못 주문하셨습니다.\n");

		order();
	}
	else
	{
		printf("주문하신 커피 준비하겠습니다.\n");
		return 0;
	}
}

int main() {
	order();
	return 0;
}