//심화_21p_문제1
//2차원 배열에 다음의 내용을 초기화하여 저장하고, 행과 열의 위츠를 바꾸어서 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main()
{
	int arr2d[3][3] = {
		{2, 4, 6},
		{8, 10, 12},
		{14, 16, 18},
	};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%5d", arr2d[j][i]);
		}
		printf("\n");
	}
}