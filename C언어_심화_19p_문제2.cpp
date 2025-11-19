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
        for (j = i + 1; j < 4; j++) {
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