//심화_31p_문제3
//HireGM_once 함수를 만들어보자
#include <stdio.h>
struct GM {
	int no;
	char name[10];
	int part;
	int salary;
};
struct COMPANY {
	GM gms[5];
	int gmCount = 0;
};
struct COMPANY HireGM_once(COMPANY co) {
	if (co.gmCount >= 5) {
		printf("최대 고용 인원은 5명 입니다.\n");
		return co;
	}
	printf("%d번째 GM을 고용해보자\n", co.gmCount + 1);

	//GM newGM;
	printf("no: ");
	scanf("%d", &co.gms[co.gmCount].no);

	printf("name: ");
	scanf(" %s", co.gms[co.gmCount].name);

	printf("part: ");
	scanf("%d", &co.gms[co.gmCount].part);

	printf("salary: ");
	scanf("%d", &co.gms[co.gmCount].salary);

	//co.gms[co.gmCount] = newGM;
	co.gmCount++;

	return co;
}
void main()
{
	printf("게임을 출시해보자!\n");
	COMPANY gameCo;
	gameCo.gmCount = 0;

	printf("먼저 GM부터 고용할까?\n");
	while (1) {
		gameCo = HireGM_once(gameCo);
		printf("더 고용할까?(y/n) : ");
		char ch;
		do {
			ch = getchar();
		} while (ch != 'y' && ch != 'n');
		if (ch == 'n') break;
	}
	printf("GM %d명을 뽑았다!\n", gameCo.gmCount);
}


//심화_31p_문제4-1
//자판기 종류를 정하고 물품을 늘린다.
//#include <stdio.h>
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//int main()
//{
//	const int N = 5;
//	SNACK snacks[N] = {
//		{1500, 3, "레몬칩"},
//		{1000, 2, "달고나"},
//		{1200, 5, "꼬깔콘"},
//		{1600, 4, "오감자"},
//		{2000, 1, "바나나킥"},
//	};
//	printf("<< 과자자판기! >>\n");
//	for (int i = 0; i < N; i++) {
//		printf("%d.[%6s] %4d원 (%d개 남음)\n",
//			i + 1,
//			snacks[i].name,
//			snacks[i].price,
//			snacks[i].stock);
//	}
//	printf("제품 번호를 입력하세요.\n");
//	int choice;
//	scanf("%d", &choice);
//
//	if (choice < 1 || choice > 5) {
//		printf("등록되지 않은 제품입니다.\n");
//		return 0;
//	}
//
//	printf("%s가 나왔습니다.\n", snacks[choice - 1].name);
//	return 0;
//}


//심화_31p_문제4-2
//금액을 입력할 수 있게 하여 물건 구매 후에 추가구매를 가능하게 만든다.
//#include <stdio.h>
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//int main()
//{
//	const int N = 5;
//	SNACK snacks[N] = {
//		{1500, 3, "레몬칩"},
//		{1000, 2, "달고나"},
//		{1200, 5, "꼬깔콘"},
//		{1600, 4, "오감자"},
//		{2000, 1, "바나나킥"},
//	};
//	printf("<< 과자자판기! >>\n");
//	printf("투입할 금액을 입력하세요.\n");
//	int money;
//	scanf("%d", &money);
//
//	if (money <= 0) {
//		printf("투입금액이 없습니다. 종료합니다.\n");
//		return 0;
//	}
//	int minPrice = snacks[0].price;
//	for (int i = 0; i < N; i++) {
//		if (snacks[i].price < minPrice) {
//			minPrice = snacks[i].price;
//		}
//	}
//	while (1) {
//		printf("현재 잔액은 %d원 입니다.\n", money);
//		printf("===== 메뉴 =====\n");
//		for (int i = 0; i < N; i++) {
//			printf("%d.[%6s] %4d원 (%d개 남음)\n",
//				i + 1,
//				snacks[i].name,
//				snacks[i].price,
//				snacks[i].stock);
//		}
//		printf("0: 프로그램 종료\n");
//
//		printf("\n제품 번호를 입력하세요.\n");
//		int choice;
//		scanf("%d", &choice);
//
//		if (choice == 0) {
//			printf("프로그램을 종료합니다.\n");
//			break;
//		}
//		if (choice < 1 || choice > 5) {
//			printf("등록되지 않은 제품입니다.\n");
//			continue;
//		}
//		int idx = choice - 1;
//		if (snacks[idx].stock <= 0) {
//			printf("%s 제품은 품절되었습니다.\n", snacks[idx].name);
//			continue;
//		}
//		if (money < snacks[idx].price) {
//			printf("금액이 부족합니다. %s 제품을 구매할 수 없습니다.\n", snacks[idx].name);
//			continue;
//		}
//		snacks[idx].stock--;
//		money -= snacks[idx].price;
//
//		printf("%s가 나왔습니다!\n", snacks[idx].name);
//
//		if (money < minPrice) {
//			printf("현재 잔액으로 제품을 구매할 수 없어서 종료합니다.\n");
//			break;
//		}
//	}
//	printf("거스름돈 %d원을 반환합니다.\n", money);
//	return 0;
//}

//심화_31p_문제4-3
//추가 금액 투입기능과, 거스름돈 반환 기능을 넣는다.
//#include <stdio.h>
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//void print_change(int money) {
//	int unit[] = { 50000,10000,5000,1000,500,100,50,10 };
//	int n = sizeof(unit) / sizeof(unit[0]);
//
//	printf("잔돈을 반환합니다.\n");
//
//	for (int i = 0; i < n; i++) {
//		int cnt = money / unit[i];
//		if (cnt > 0) {
//			printf("%d원 %d개\n", unit[i], cnt);
//			money %= unit[i];
//		}
//	}
//}
//int main()
//{
//	const int N = 5;
//	SNACK snacks[N] = {
//		{1500, 3, "신라면"},
//		{1000, 2, "스낵면"},
//		{1200, 5, "진라면"},
//		{1600, 4, "짜짜로니"},
//		{2000, 1, "맛있는라면"},
//	};
//	printf("<< 라면자판기! >>\n");
//	printf("투입할 금액을 입력하세요.\n");
//	int money;
//	scanf("%d", &money);
//
//	if (money <= 0) {
//		printf("투입금액이 없습니다. 종료합니다.\n");
//		return 0;
//	}
//	while (1) {
//		printf("현재 잔액은 %d원 입니다.\n", money);
//		printf("===== 메뉴 =====\n");
//		printf("0: 프로그램 종료\n");
//		for (int i = 0; i < N; i++) {
//			printf("%d.[%6s] %4d원 (%d개 남음)\n",
//				i + 1,
//				snacks[i].name,
//				snacks[i].price,
//				snacks[i].stock);
//		}
//		printf("6:추가 금액 투입\n");
//		printf("\n제품 번호를 입력하세요.\n");
//		int choice;
//		scanf("%d", &choice);
//
//		if (choice == 6) {
//			printf("추가 금액을 투입합니다. 투입할 금액을 입력하세요.\n");
//			int PlusMoney;
//			scanf("%d", &PlusMoney);
//			if (PlusMoney <= 0) {
//				printf("투입금액을 다시 입력해주세요\n");
//				continue;
//			}
//			money += PlusMoney;
//			continue;
//		}
//		if (choice == 0) {
//			printf("프로그램을 종료합니다.\n");
//			break;
//		}
//		if (choice < 1 || choice > N) {
//			printf("등록되지 않은 제품입니다.\n");
//			continue;
//		}
//		int idx = choice - 1;
//
//		if (snacks[idx].stock == 0) {
//			printf("%s 제품은 품절되었습니다.\n", snacks[idx].name);
//			continue;
//		}
//		if (money < snacks[idx].price) {
//			printf("금액이 부족합니다. %s 제품을 구매할 수 없습니다.\n", snacks[idx].name);
//			continue;
//		}
//
//		snacks[idx].stock--;
//		money -= snacks[idx].price;
//
//		int canBuy = 0;
//		for (int i = 0; i < N; i++) {
//			if (snacks[i].stock > 0 && money >= snacks[i].price) {
//				canBuy = 1;
//				break;
//			}
//		}
//
//		if (canBuy == 0) {
//			printf("현재 잔액으로 구매 가능한 제품이 없어서 종료합니다.\n");
//			break;
//		}
//
//		printf("%s가 나왔습니다!\n", snacks[idx].name);
//	}
//	printf("거스름돈 %d원을 반환합니다.\n", money);
//	print_change(money);
//	return 0;
//}