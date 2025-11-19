//심화_21p_문제1
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