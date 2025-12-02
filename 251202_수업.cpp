//251127_목요일_숙제
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//char parsing(char* buff, int* data)
//{
//	char* p;
//	int index = 0;
//	char op = 0;
//
//	/*p = strtok(buff, " ");
//	while (p != NULL)
//	{
//		if (index == 0) {
//			data[0] = atoi(p);
//		}
//		else if (index == 1) {
//			op = p[0];
//		}
//		else if (index == 2) {
//			data[1] = atoi(p);
//		}
//		else if (index == 4) {
//			data[2] = atoi(p);
//		}
//		index++;
//		p = strtok(NULL, " ");
//	}*/
//
//	//하드 코딩
//	p = strtok(buff, " ");
//	data[0] = atoi(p);
//
//	p = strtok(NULL, " ");
//	op = p[0];
//
//	p = strtok(NULL, " ");
//	data[1] = atoi(p);
//
//	p = strtok(NULL, " ");
//
//	p = strtok(NULL, " ");
//	data[2] = atoi(p);
//
//	return op;
//}
//
//int main()
//{
//	char buff[100] = {};
//	int data[3];
//	int result = 0;
//
//	printf("식 입력(예: 3 - 1 = 2): ");
//	gets_s(buff, sizeof(buff));
//
//	char op = parsing(buff, data);
//
//	int a = data[0];
//	int b = data[1];
//	int c = data[2];
//
//	switch (op) {
//	case '+': result = a + b; break;
//	case '-': result = a - b; break;
//	case '*': result = a * b; break;
//	case '/':
//		if (b == 0)
//		{
//			printf("0으로 나눌 수 없습니다.\n");
//			return 1;
//		}
//		result = a / b; break;
//	default :
//		printf("지원하지 않는 연산자입니다.\n");
//		return 1;
//	}
//
//	if (result == c)
//	{
//		printf("참 입니다.\n");
//	}
//	else
//	{
//		printf("%d %c %d 는 %d 입니다.\n", a, op, b, result);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//struct GM {
//	int no;
//	char name[10];
//	int part;
//	int salary;
//};
//struct COMPANY {
//	GM gms[5];
//	int gmCount = 0;
//};
//void main()
//{
//	printf("게임을 출시해보자!\n");
//	COMPANY gameCo;
//
//	printf("먼저 GM부터 고용할까?\n");
//	while (1) {
//		gameCo = HireGM_once(gameCo);
//		printf("더 고용할까?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n') break;
//	}
//	printf("GM %d명을 뽑았다!\n", gameCo.gmCount);
//}


//심화_31p_문제3
//#include <stdio.h>
//struct GM {
//	int no;
//	char name[10];
//	int part;
//	int salary;
//};
//struct COMPANY {
//	GM gms[5];
//	int gmCount = 0;
//};
//struct COMPANY HireGM_once(COMPANY co) {
//	if (co.gmCount >= 5) {
//		printf("최대 고용 인원은 5명 입니다.\n");
//		return co;
//	}
//	printf("%d번째 GM을 고용해보자\n", co.gmCount + 1);
//
//	GM newGM;
//	printf("no: ");
//	scanf("%d", &co.gms[co.gmCount].no);
//
//	printf("name: ");
//	scanf(" %s", co.gms[co.gmCount].name);
//
//	printf("part: ");
//	scanf("%d", &co.gms[co.gmCount].part);
//
//	printf("salary: ");
//	scanf("%d", &co.gms[co.gmCount].salary);
//
//	co.gms[co.gmCount] = newGM;
//	co.gmCount++;
//
//	return co;
//}
//void main()
//{
//	printf("게임을 출시해보자!\n");
//	COMPANY gameCo;
//	gameCo.gmCount = 0;
//
//	printf("먼저 GM부터 고용할까?\n");
//	while (1) {
//		gameCo = HireGM_once(gameCo);
//		printf("더 고용할까?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n') break;
//	}
//	printf("GM %d명을 뽑았다!\n", gameCo.gmCount);
//}


//#include <stdio.h>
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//int main()
//{
//	const int N = 2;
//	SNACK snacks[N] = {
//		{1500, 3, "레몬칩"},
//		{1000, 2, "달고나"},
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
//	printf("%s가 나왔습니다.\n", snacks[choice - 1].name);
//	return 0;
//}


//심화_31p_문제4-1
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


//심화_31p_문제4-2
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
//	int minPrice = snacks[0].price;
//	for (int i = 1; i < N; i++) {
//		if (snacks[i].price < minPrice) {
//			minPrice = snacks[i].price;
//		}
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
//		if (money < minPrice) {
//			printf("현재 잔액으로 제품을 구매할 수 없어서 종료합니다.\n");
//			break;
//		}
//
//		printf("%s가 나왔습니다!\n", snacks[idx].name);
//	}
//	printf("거스름돈 %d원을 반환합니다.\n", money);
//	print_change(money);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	aNum = (int**)malloc(nRow * sizeof(int*));
//	for (int i = 0; i < nRow; i++) {
//		aNum[i] = (int*)malloc(nCol * sizeof(int));
//
//		for (int j = 0; j < nCol; ++j) {
//			aNum[i][j] = i * 10 + j;
//		}
//	}
//	for (int i = 0; i < nRow; ++i) {
//		for (int j = 0; j < nCol; j++)
//			printf("%02d ", aNum[i][j]);
//		printf("\n");
//	}
//	for (int i = 0; i < nRow; ++i)
//		free(aNum[i]);
//	free(aNum);
//}


//심화_32p_문제1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	//aNum = (int**)malloc(nRow * sizeof(int*));
//	aNum = new int*[nRow];
//	for (int i = 0; i < nRow; i++) {
//		//aNum[i] = (int*)malloc(nCol * sizeof(int));
//		aNum[i] = new int[nCol];
//
//		for (int j = 0; j < nCol; ++j) {
//			aNum[i][j] = i * 10 + j;
//		}
//	}
//	for (int i = 0; i < nRow; ++i) {
//		for (int j = 0; j < nCol; j++)
//			printf("%02d ", aNum[i][j]);
//		printf("\n");
//	}
//	for (int i = 0; i < nRow; ++i)
//		//free(aNum[i]);
//		delete aNum[i];
//	//free(aNum);
//	delete aNum;
//}


//심화_32p_문제2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n = 10;
	int arr;

	for (int i = 0; i < n; i++) {
		arr = i + 1;
	}

	return 0;
}