//심화_26p_문제1
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int arr[101];
//	int* p;
//
//	for (i = 100; i > 0; i--)
//	{
//		arr[i] = i;
//	}
//	p = &arr[100];
//	for (i = 100; i > 0; i--)
//	{
//		printf("%d\n", *p);
//		p--;
//	}
//	return 0;
//}


//심화_26p_문제2
//#include <stdio.h>
//int i;
//int arr[101];
//int* ptr;
//
//int main()
//{
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	ptr = &arr[50];
//	while (*ptr != 50)
//	{
//		printf("%d\n", *ptr);
//		ptr++;
//
//		if (ptr == &arr[100])
//		{
//			ptr = &arr[0];
//		}
//	}
//	return 0;
//}


//memmove: 15번 인덱스부터 11바이트를 20번 인덱스부터 복사해서 덮어쓴다
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "memmove can be very useful.......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}


//memset: 하나의 값으로 메모리를 채운다.
//#include <stdio.h>
//#include <string.h>
//
//struct mydata
//{
//	int a;
//	char b[25];
//};
//
//void main()
//{
//	char buf[6];
//	memset(buf, '1', 5);
//	buf[5] = '\0';
//	printf("%s\n", buf);
//
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'K';
//	printf("%d - %s\n", data.a, data.b);
//}


//memcmp: 글자의 ASCII 크기 비교, 비교하려는 글자길이.
//음수 s1<s2, 양수 s1>s2.
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* str1 = (char*)"coding";
//	char* str2 = (char*)"coding";
//	char* str3 = (char*)"coding.ne.kr";
//	char* str4 = (char*)"ne.kr";
//	char* str5 = (char*)"abcd";
//
//	printf("%s with %s = %d\n", str1, str2,
//		memcmp(str1, str2, strlen(str1)));
//	printf("%s with %s(str1 size) = %d\n", str1, str3,
//		memcmp(str1, str3, strlen(str1)));
//	printf("%s with %s(str3 size) = %d\n", str1, str3,
//		memcmp(str1, str3, strlen(str3)));
//
//	printf("%s with %s = %d\n", str1, str4,
//		memcmp(str1, str4, strlen(str1)));
//
//	printf("%s with %s (str1 size) = %d\n", str1, str5,
//		memcmp(str1, str5, strlen(str1)));
//	printf("%s with %s (str5 size) = %d\n", str1, str5,
//		memcmp(str1, str5, strlen(str5)));
//
//	return 0;
//}


//memcpy: 복사할 값, 복사할 주소, 복사할 메모리
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int src_data[10] = { 0,1,2,3,4,5 };
//	int dst_data[10] = { 10,20,30,40,50 };
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//
//	printf("%d %d %d %d %d\n", src_data[0],
//		src_data[1], src_data[2], src_data[3], src_data[4]);
//
//	printf("%d %d %d %d %d\n", dst_data[0],
//		dst_data[1], dst_data[2], dst_data[3], dst_data[4]);
//
//	return 0;
//}


//strcat: 문자열버퍼, 뒤에 이어 붙일 문자열
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[20] = "coding";
//
//	strcat(str, ".ne.kr");
//	printf("%s\n", str);
//
//	return 0;
//}


//strlen: 문자열의 길이를 측정해주는 기능
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[10];
//
//	scanf("%s", str);
//	printf("입력한 문자열 : %s\n", str);
//	printf("문자열의 길이 : %d\n", strlen(str));
//}


//strchr: 문자열에서 문자를 찾은 위치의 주소를 리턴
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a sample string";
//	char* pch;
//	printf("Looking for the 's' character in \"%s\"...\n",str);
//	pch = strchr(str, 's');
//
//	while (pch != NULL)
//	{
//		printf("found at %d\n", pch - str + 1);
//		//'s'가 있는 어떤 위치의 주소 - 시작 주소 + 1(1부터 시작)
//		pch = strchr(pch + 1, 's');
//		//문자 발견 위치에서 다음 문자를 찾는다.
//	}
//	return 0;
//}


//strncpy: 시작 위치부터 문자열을 설정 글자 덮어씌우기
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//
//	pch = strstr(str, "simple");
//	//strstr: 문자열에서 문자열을 찾은 위치의 주소를 리턴
//	strncpy(pch, "sample", 6);
//	//문자열 시작 위치에서 sample로 6글자 덮어씌우기
//	printf("%s\n", str);
//	return 0;
//}


//strcmp: 문자열의 첫글자 ASCII를 비교하여 1/0/-1 출력
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* str1 = "LPUX";
//	const char* str2 = "HINUX";
//	const char* str3 = "SOLARIS";
//
//	printf("s1[%-7s], s2[%-7s] => ret = [%2d]\n",
//		str1, str2, strcmp(str1, str2));
//	printf("s2[%-7s], s3[%-7s] => ret = [%2d]\n",
//		str2, str3, strcmp(str2, str3));
//	printf("s3[%-7s], s1[%-7s] => ret = [%2d]\n",
//		str3, str1, strcmp(str3, str1));
//
//	return 0;
//}


//strcpy: 문자열 전체를 '\0'까지 그대로 복사
//strncpy: 설정 크기만큼 복사하고 나머지는 '\0'로 채움
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buf[25];
//
//	strcpy(buf, "hello world");
//	//문자열 전체를 '\0'까지 그대로 복사.
//	//버퍼 크기가 안맞으면 위험.
//	printf("%s\n", buf);
//	strncpy(buf, "hello world", 5);
//	//설정 크기만큼 복사하고 나머지는 '\0'로 채움.
//	//설정 크기가 넘어가면 이전값 출력.
//	buf[5] = '\0';
//	printf("%s\n", buf);
//}


//29p_문제1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buff[100];
//	char ch;
//	char* pch;
//
//	printf("문자열을 입력하세요: ");
//	gets_s(buff, sizeof(buff));
//
//	while (1)
//	{
//		printf("검색할 문자 입력 (0 입력시 종료): ");
//		scanf(" %c", &ch);
//
//		if (ch == '0')
//		{
//			printf("프로그램을 종료합니다. ");
//			break;
//		}
//
//		pch = strchr(buff, ch);
//		if (pch == NULL)
//		{
//			printf("'%c'문자는 문자열에 없습니다.\n", ch);
//		}
//		else
//		{
//			while (pch != NULL)
//			{
//				printf("'%c' 문자는 문자열의 %d 번째에 있습니다.\n", ch, pch - buff + 1);
//				pch = strchr(pch + 1, ch);
//			}
//		}
//	}
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
//	//strtok을 이용해서 string 문자열을 _로 구분
//	p = strtok(string, "_");
//	while (p) {
//	//atoi를 이용해서 구분된 숫자문자열을 정수로 변환
//		data[cnt++] = atoi(p);
//	//strtok을 이용해서 string 문자열 계속해서 _로 구분
//		p = strtok(NULL, "_");
//	}
//	return cnt;
//}
//int main()
//{
//	char String[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(String, data);
//	
//	for (i = 0; i < cnt; i++)
//	{
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
//	sprintf(buf, "floating point : %e \\%f \n", pi, pi);
//	printf("%s \n", buf);
//
//	sprintf(buf, "percent symbol : %% \n");
//	printf("%s \n", buf);
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char expr[100];
    char* token;
    int a, b, c;
    char op;
    int result;

    printf("식을 입력하세요 : ");
    fgets(expr, sizeof(expr), stdin);

    token = strtok(expr, " ");
    a = atoi(token);

    token = strtok(NULL, " ");
    op = token[0];

    token = strtok(NULL, " ");
    b = atoi(token);

    token = strtok(NULL, " ");

    token = strtok(NULL, " ");
    c = atoi(token);

    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;

    if (result == c) {
        printf("참입니다.\n");
    }
    else {
        printf("%d %c %d 는 %d입니다.\n", a, op, b, result);
    }
    return 0;
}