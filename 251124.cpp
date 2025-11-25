//26p_문제1-6
//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[100] = {};
//	int* ptr;
//
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	ptr = &arr[99];
//	for (i = 0; i < 100; i++)
//	{
//		printf("%3d ", *ptr);
//		ptr--;
//	}
//
//	return 0;
//}


//26p_문제2
//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[100] = {};
//	int* ptr;
//
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	ptr = &arr[50];
//	while (ptr != &arr[49])
//	{
//		printf("%3d ", *ptr);
//		ptr++;
//		if (ptr == &arr[100])
//		{
//			ptr = &arr[0];
//		}
//	}
//	return 0;
//}


//29p_문제1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buff[100] = {};
//	char ch;
//	char* pch;
//
//	printf("문자열을 입력하세요. \n");
//	gets_s(buff, sizeof(buff));
//
//	while (1)
//	{
//		printf("검색할 문자를 입력하세요(0 입력시 종료): \n");
//		scanf(" %c", &ch);
//
//		if (ch == '0')
//		{
//			printf("프로그램을 종료합니다.\n");
//			break;
//		}
//
//		pch = strchr(buff, ch);
//
//		if (pch == NULL)
//		{
//			printf("%c 문자는 문자열에 없습니다.\n", ch);
//		}
//		else {
//			while (pch != NULL)
//			{
//				printf("%c는 문자열의 %d 번째에 있습니다.\n", ch, pch - buff + 1);
//				pch = strchr(pch + 1, ch);
//			}
//		}
//	}
//	return 0;
//}


//30p_문제2
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char buff[100];
//	char* p;
//
//	int nums[3];
//	int* data[3];
//	int cnt = 0;
//	char op;
//
//	printf("식 입력(예: 3 - 1 = 2): \n");
//	gets_s(buff, sizeof(buff));
//
//	for (int i = 0; i < 3; i++)
//	{
//		data[i] = &nums[i];
//	}
//
//	int index = 0;
//
//	p = strtok(buff, " ");
//	while (p != NULL)
//	{
//		if (index == 0) {
//			*data[0] = atoi(p);
//		}
//		else if (index == 1) {
//			op = p[0];
//		}
//		else if (index == 2) {
//			*data[1] = atoi(p);
//		}
//		else if (index == 4) {
//			*data[2] = atoi(p);
//		}
//		index++;
//		p = strtok(NULL, " ");
//	}
//
//	int a = *data[0];
//	int b = *data[1];
//	int c = *data[2];
//	int result = 0;
//
//	switch (op)
//	{
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
//	default:
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
//	return 0;
//}


//심화_31p_문제3
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

struct COMPANY HireGM_once(COMPANY co)
{
	if (co.gmCount >= 5) {
		printf("GM은 5명이 최대입니다.\n");
		return co;
	}
	GM newGM;
	printf("%d 번째 GM 정보 입력\n", co.gmCount + 1);

	printf("no: ");
	scanf("%d", &newGM.no);

	printf("name: ");
	scanf("%9s", newGM.name);

	printf("part: ");
	scanf("%d", &newGM.part);

	printf("salary: ");
	scanf("%d", &newGM.salary);

	co.gms[co.gmCount] = newGM;
	co.gmCount++;

	return co;
}

void main()
{
	printf("게임을 출시해보자! \n");
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