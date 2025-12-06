//심화_19p_문제1
//배열 안에 4, 3, 1, 2 네 개의 수가 있을 때, swap을 사용해 오름차순으로 수동정렬하여 출력하라.
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
//문제 1번을 응용하여 임의의 수 네개를 받아 오름차순으로 정렬하여 출력하라.
#include <stdio.h>

int main(void)
{
    int num[4];
    int i, j, temp;
    for (i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }
    // 오름차순 정렬 (간단한 선택 정렬)
    for (i = 0; i < 3; i++) {
        for (j = i; j < 4; j++) {
            if (num[j] < num[i]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (i = 0; i < 4; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}