//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a sample string";
//	char* pch;
//	printf("Looking for the 's' character in \" %s \" ... \n", str);
//	pch = strchr(str, 's');
//
//	while (pch != NULL)
//	{
//		printf("found at %d\n", pch - str + 1);
//		pch = strchr(pch + 1, 's');
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buff[100] = {};
//	char* pch;
//	char ch;
//
//	printf("문자열을 입력하세요.\n");
//	gets_s(buff, sizeof(buff));
//
//	while (1)
//	{
//		printf("검색할 문자를 입력하세요(0 입력시 종료): ");
//		scanf(" %c", &ch);
//
//		if (ch == '0')
//		{
//			printf("프로그램을 종료합니다.\n");
//			break;
//		}
//		pch = strchr(buff, ch);
//		if (pch == NULL)
//		{
//			printf("%c 문자는 문자열에 없습니다.\n", ch);
//		}
//		else {
//			while (pch != NULL) {
//				printf("%c 문자는 문자열의 %d 번째에 있습니다.\n", ch, pch - buff + 1);
//				pch = strchr(pch + 1, ch);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	printf("%s\n", str);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int parsing(char* string, int* data)
//{
//	char* p;
//	int cnt;
//	cnt = 0;
//	
//	p = strtok(string, "_");
//	while (p) {
//		data[cnt++] = atoi(p);
//		p = strtok(NULL, "_");
//	}
//	return cnt;
//}
//int main() {
//	char string[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(string, data);
//
//	for (i = 0; i < cnt; i++) {
//		printf("%d\n", data[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int integer = 123;
//	char character = 'c';
//	char string[] = "hello, world";
//	int* pointer = &integer;
//	double pi = 3.141592;
//	char buf[100];
//
//	sprintf(buf, "integer : (decimal) %d (octal) %o \n", integer, integer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "character : %c \n", character);
//	printf("%s \n", buf);
//
//	sprintf(buf, "string : %s \n", string);
//	printf("%s \n", buf);
//
//	sprintf(buf, "pointer addr : %p \n", pointer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "floating point : %e // %f \n", pi, pi);
//	printf("%s \n", buf);
//
//	sprintf(buf, "percent symbol : %% \n");
//	printf("%s \n", buf);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char buff[100] = {};
//	char* p;
//
//	int nums[3];
//	int* data[3];	//넣지 않아도 된다.
//	int cnt = 0;
//	char op;
//
//	printf("식 입력(예: 3 - 1 = 2): ");	//함수로 변경
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
//	while (p != NULL) {			//하드코딩이라 반복문 불필요
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
//	int a = *data[0];
//	int b = *data[1];
//	int c = *data[2];
//	int result = 0;
//
//	switch (op) {
//	case '+': result = a + b; break;
//	case '-': result = a - b; break;
//	case '*': result = a * b; break;
//	case '/':
//		if (b == 0)
//		{
//			printf("0으로 나눌수 없습니다.\n");
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


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int parsing(char* buff, int* data)
{
	char* p;
	p = strtok()
}

int main()
{
	char buff[100] = {};
	int data[3];
	int cnt, result = 0;

	printf("문자열을 입력하세요.\n");
	gets_s(buff, sizeof(buff));

	char op = parsing(buff, data);

	return 0;
}