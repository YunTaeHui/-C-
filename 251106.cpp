//#include <stdio.h>
//
//void main()
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}


//#include <stdio.h>
//
//void main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}


//#include <stdio.h>
//
//void main()
//{
//	char alpah[4] = { 'a','b','c','d' };
//	printf("%c%c%c%c%c\n", alpah[0], alpah[1], alpah[2], alpah[3]);
//}


//#include <stdio.h>
//
//void main()
//{
//	int num[3] = { 3,6,9 };
//	printf("num의 안에 들어있는");
//	printf("1 번째 숫자는? %d\n", num[1]);
//}


//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("%d번째에 %d 저장\n", 0, num[0]);
//	printf("%d번째에 %d 저장\n", 1, num[1]);
//	printf("%d번째에 %d 저장\n", 2, num[2]);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	int k = 0;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++) {
//		printf("%d번째에 %d 저장\n", k, num[k]);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


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
//#include <stdio.h>
//
//int main()
//{
//	int arr[10];
//	int i;
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	while (1) {
//		int x, found = 0;
//
//		scanf("%d", &x);
//
//		for (i = 0; i < 10; i++) {
//			if (arr[i] == x) {
//				printf("exist");
//				found = 1;
//				break;
//			}
//		}
//		if (found == 1) break;
//	}
//	return 0;
//}


//#include <stdio.h>
//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left = %d, ", left);
//	printf("right = %d \n", right);
//}


//#include <stdio.h>
//void main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	printf("left = %d, ", left);
//	printf("right = %d \n", right);
//}


//#include <stdio.h>
//void main()
//{
//	int num[2] = { 10,3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0] = %d, ", num[0]);
//	printf("num[1] = %d\n ", num[1]);
//}


//심화_19p_문제1
//#include <stdio.h>
//void main()
//{
//	int num[4] = { 4,3,1,2 };
//	int temp;
//	temp = num[0];
//	num[0] = num[2];
//	num[2] = temp;
//
//	temp = num[1];
//	num[1] = num[3];
//	num[3] = temp;
//
//	temp = num[2];
//	num[2] = num[3];
//	num[3] = temp;
//
//	printf("%d %d %d %d\n", num[0], num[1], num[2], num[3]);
//}


//심화_19p_문제2
//#include <stdio.h>
//
//int main(void)
//{
//    int num[4];
//    int i, j, temp;
//    for (i = 0; i < 4; i++) {
//        scanf("%d", &num[i]);
//    }
//    // 오름차순 정렬 (간단한 선택 정렬)
//    for (i = 0; i < 3; i++) {
//        for (j = i + 1; j < 4; j++) {
//            if (num[j] < num[i]) {
//                temp = num[i];
//                num[i] = num[j];
//                num[j] = temp;
//            }
//        }
//    }
//    for (i = 0; i < 4; i++) {
//        printf("%d\n", num[i]);
//    }
//    return 0;
//}


//#include <stdio.h>
//void main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two) max = one;
//	else max = two;
//	printf("max = %d \n", max);
//}


//#include <stdio.h>
//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//	if (one > two) {
//		if (one > three) max = one;
//		else max = three;
//	}
//	else {
//		if (two > three) max = two;
//		else max = three;
//	}
//	printf("max = %d\n", max);
//}


//#include <stdio.h>
//void main()
//{
//	int a[3] = { 1,3,2 };
//	int max = a[0];
//	for (int i = 1; i < 3; i++) {
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("max = %d\n", max);
//}


//심화_20p_문제1
#include <stdio.h>

int main(void)
{
    int a[5] = { 1, 3, 6, 4, 2 };
    int i;
    int min = a[0];
    int max = a[0];
    int sum = 0;
    double avg;

    for (i = 0; i < 5; i++) {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];

        sum += a[i];
    }

    avg = (double)sum / 5;

    printf("min = %d\n", min);
    printf("max = %d\n", max);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", avg);

    return 0;
}


//심화_20p_문제2
//#include <stdio.h>
//
//int main(void)
//{
//    int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
//    int cnt[7] = { 0 };
//    int i;
//
//    // 각 눈의 개수 누적
//    for (i = 0; i < 10; i++) {
//        int x = a[i];
//        cnt[x]++;
//    }
//
//    // 결과 출력
//    for (i = 1; i <= 6; i++) {
//        printf("%d: %d\n", i, cnt[i]);
//    }
//
//    return 0;
//}