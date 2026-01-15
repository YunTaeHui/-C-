//292p_연습문제9
//문자열을 입력받고 그 문자열에서 변환할 기존 문자와 새로운 문자를 각각 입력받은 뒤
//변환된 문자열을 거꾸로 출력하는 프로그램을 작성해보세요.
//단, 코드에서 배열은 1개만 선언해 사용하고,
//제시된 실행 결과와 같이 문자열을 거꾸로 출력해야 합니다.
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100] = {};
	char ch1, ch2;
	int count, i, j;

	printf("문자열을 입력하세요.");
	gets_s(str);

	printf("기존 문자와 새로운 문자 : ");
	if (scanf("%c %c", &ch1, &ch2) != 2) {
		return 0;
	}

	count = (int)strlen(str);

	for (i = 0, j = count - 1; i < j; i++, j--) {
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	printf("내용을 거꾸로 출력 ==> %s \n", str);

	for (i = 0; i < count; i++) {
		if (str[i] == ch1)
			str[i] = ch2;
	}
	printf("문자를 반환하여 출력 ==> %s \n", str);

	return 0;
}