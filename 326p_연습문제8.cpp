//326p_연습문제8
//다음과 같이 글자가 거꾸로 출력되고 영문 대문자와 소문자가 상호 변환되는 실행 결과가 나오도록
//코드의 빈칸을 채우세요. 단, ary는 사용하지 말고 p를 사용해서 채우세요.
#include <stdio.h>
int main()
{
	char ary[25] = "IT 1234 @$% CookBook";
	char* p;
	int i;
	p = ary;
	int diff = 'a' - 'A';

	for (i = sizeof(ary) - 2; i >= 0; i--)
	{
		if ('A' <= *(p + i) && *(p + i) <= 'Z')
			*(p + i) += diff;
		else if ('a' <= *(p + i) && *(p + i) <= 'z')
			*(p + i) -= diff;
		else *(p + i);

		printf("%c", *(p + i));
	}
	printf("\n");
	return 0;
}