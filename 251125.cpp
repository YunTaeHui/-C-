//308p_9-6
//#include <stdio.h>
//void main()
//{
//	char ch;
//	char* p;
//
//	ch = 'A';
//	p = &ch;
//
//	printf("ch가 가지고 있는 값: ch ==> %c \n", ch);
//	printf("ch의 주소(address): &ch ==> %d \n", &ch);
//	printf("p가 가지고 있는 값: p ==> %d \n", p);
//	printf("p가 가리키는 곳의 실제 값: *p ==> %c \n", *p);
//}


//310p_9-7
//#include <stdio.h>
//void main()
//{
//	char ch;
//	char* p;
//	char* q;
//
//	ch = 'A';
//	p = &ch;
//
//	q = p;
//	//*q = 'Z';
//
//	printf("ch가 가지고 있는 값: ch ==> %c \n\n", ch);
//	printf("q가 가지고 있는 값: ch ==> %c \n\n", *q);
//}


//313p_9-8
//#include <stdio.h>
//void main()
//{
//	char s[8] = "Basic-C";
//	char* p;
//
//	p = s;
//
//	printf("&s[3] ==> %s\n", &s[3]);
//	printf("p+3 ==> %s\n\n", p + 3);
//
//	printf("s[3] ==> %c\n", s[3]);
//	printf("*(p+3) ==> %c\n", *(p + 3));
//}


//315p_9-9
//#include <stdio.h>
//void main()
//{
//	char s[8] = "Basic-C";
//	char* p;
//	int i;
//
//	p = s;
//
//	for (i = sizeof(s) - 2; i >= 0; i--)
//		printf("%c", *(p + i));
//
//	printf("\n");
//}


//320p_예제모음25
//#include <stdio.h>
//void main()
//{
//	int a, b, tmp;
//	int* p1, * p2;
//
//	printf("a 값 입력 : ");
//	scanf("%d", &a);
//	printf("b 값 입력 : ");
//	scanf("%d", &b);
//
//	p1 = &a;
//	p2 = &b;
//
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//
//	printf("바뀐 값 a는 %d, b는 %d \n", a, b);
//}


//321p_예제모음26
//#include <stdio.h>
//void main()
//{
//	int s[10] = { 1,0,3,2,5,4,7,6,9,8 };
//	int tmp;
//	int i, k;
//
//	int* p;
//	p = s;
//
//	printf("정렬 전 배열 s ==> ");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//
//	for (i = 0; i < 9; i++)
//	{
//		for (k = i + 1; k < 10; k++)
//		{
//			if (*(p + i) > *(p + k))
//			{
//				tmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = tmp;
//			}
//		}
//	}
//	printf("정렬 후 배열 s ==> ");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}


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
//	return 0;
//}


//26p_문제2
//#include <stdio.h>
//int main()
//{
//	int arr[100] = {};
//	int i;
//	int* ptr;
//
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	ptr = &arr[50];
//	for (; *ptr != 50; ptr++)
//	{
//		printf("%3d ", *ptr);
//		if (*ptr == 100)
//			ptr -= 100;
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	//gets_s(str);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//struct mydata
//{
//	int a;
//	char b[25];
//};
//void main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
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


#include <stdio.h>
#include <string.h>
int main()
{
	char* str1 = (char*)"coding";
	char* str2 = (char*)"coding";
	char* str3 = (char*)"coding.ne.kr";
	char* str4 = (char*)"ne.kr";
	char* str5 = (char*)"abcd";

	printf("%s with %s = %d\n", str1, str2, memcmp(str1, str2, strlen(str1)));
	printf("%s with %s(str1 size) = %d\n", str1, str3, memcmp(str1, str3, strlen(str1)));
	printf("%s with %s(str3 size) = %d\n", str1, str3, memcmp(str1, str3, strlen(str3)));

	printf("%s with %s = %d\n", str1, str4, memcmp(str1, str4, strlen(str1)));

	return 0;
}