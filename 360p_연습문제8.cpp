//360p_연습문제8
//다음에 제시된 실행 결과와 같이 대소문자가 상호 변환되도록 upper_lower() 함수를 올바르게 작성하세요.
//문자열을 입력(100자 이내) : IT_CookBook_Hanbit_Network
//대소문자 변환 결과 ==> it_cOOKbOOK_hANBIT_nETWORK
#include <stdio.h>
#include <string.h>

char* upper_lower(char* inStr) {
	int diff = 'a' - 'A';

	int len = strlen(inStr);

	for (int i = 0; i < len; i++) {
		if (inStr[i] >= 'a' && inStr[i] <= 'z') {
			inStr[i] = inStr[i] - diff;
		}
		else if (inStr[i] >= 'A' && inStr[i] <= 'Z') {
			inStr[i] = inStr[i] + diff;
		}
	}
	return inStr;
}

int main()
{
	char inStr[100], outStr[100];

	printf("문자열을 입력(100자 이내) : ");
	if (scanf("%s", inStr) != 1) {
		return 0;
	}

	strcpy(outStr, upper_lower(inStr));

	printf("대소문자 변환 결과 ==> %s\n", outStr);

	return 0;
}