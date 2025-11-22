//기초_15p_문제3
#include <stdio.h>
int main()
{
	int Jelly;
	printf("젤리 금액을 입력하세요.");
	scanf("%d", &Jelly);

	int Change = 1000 - Jelly;

	int Won500 = Change / 500;
	Change %= 500;
	int Won100 = Change / 100;
	Change = Change % 100;
	int Won50 = Change / 50;
	Change = Change % 50;
	int Won10 = Change / 10;
	Change = Change % 10;

	printf("거스름 돈 : 500원 동전 %d개 \n", Won500);
	printf("거스름 돈 : 100원 동전 %d개 \n", Won100);
	printf("거스름 돈 : 50원 동전 %d개 \n", Won50);
	printf("거스름 돈 : 10원 동전 %d개 \n", Won10);
	printf("나머지 거스름 돈 : %d 원 입니다.\n", Change);

	return 0;
}