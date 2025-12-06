//심화_18p_문제1
//임의의 숫자 5개를 받아와서 배열에 저장하고 엔터를 두 번 출력한 후, 배열의 내용을 출력하라.
//#include <stdio.h>
//
//int main()
//{
//	int arr[5];
//	int i;
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("\n");
//	printf("\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//심화_18p_문제2
//배열의 크기가 10인 변수를 만들고, 숫자를 10번 입력받아서 초기화 시킨다.
//새로운 루프를 시작한 후, 숫자를 하나 입력받는데, 입력 받은 값이 기존 배열 안에
//있는 값이면 "exist" 라고 출력하고 그 즉시 종료하는 프로그램을 만들어라.
//없으면 다시 받아온다.
#include <stdio.h>

int main()
{
	int arr[10];
	int i, x;
	int found = 1;
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	while (found) {
		scanf("%d", &x);

		for (i = 0; i < 10; i++) {
			if (arr[i] == x) {
				printf("exist\n");
				found = 0;
				break;
			}
		}
	}
	return 0;
}