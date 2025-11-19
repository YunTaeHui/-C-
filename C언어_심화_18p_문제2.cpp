//심화_18p_문제1
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