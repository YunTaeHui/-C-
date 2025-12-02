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