//156p_연습문제10
//다음과 같이 금액을 입력하면 5만원, 1만원, 5천원, 1천원 지폐로 교환해주는 코드를 작성하세요.
#include <stdio.h>

void main()
{
	int money, c50000, c10000, c5000, c1000;

	printf(" ## 지폐로 교환할 금액을 입력하세요.\n");
	scanf("%d", &money);

	c50000 = money / 50000;
	money = money % 50000;

	c10000 = money / 10000;
	money = money % 10000;

	c5000 = money / 5000;
	money = money % 5000;

	c1000 = money / 1000;
	money = money % 1000;

	printf("오만원 갯수 ==> %d 장\n", c50000);
	printf("만원 갯수 ==> %d 장\n", c10000);
	printf("오천원 갯수 ==> %d 장\n", c5000);
	printf("천원 갯수 ==> %d 장\n", c1000);
	printf("지폐로 바꾸지 못한 잔돈 ==> %d 원\n", money);
}