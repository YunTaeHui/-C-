//326p_연습문제9
//다음에 제시된 실행 결과와 같이 원본 문자열이 내림차순으로 정렬되어 출력되는 코드를 작성하세요.
//단, 배열을 포인터로 대입한 후에 포인터를 사용해서 정렬하세요.
//char s[40] = "ITCookBookHanbitNetwork";
#include <stdio.h>
#include <string.h>

int main()
{
	char s[25] = "ITCookBookHanbitNetwork";
	int tmp;
	int count, i, k;

	char* p;

	p = s;

	count = strlen(s);

	printf("정렬 전 문자열 ==> ");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + i));
	}
	printf("\n");

	for (i = 0; i < count; i++)
	{
		for (k = i + 1; k < count; k++)
		{
			if (*(p + i) > *(p + k))
			{
				tmp = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = tmp;
			}
		}
	}
	printf("정렬 후 문자열 ==> ");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + count - (i + 1)));
	}
	printf("\n");

	return 0;
}