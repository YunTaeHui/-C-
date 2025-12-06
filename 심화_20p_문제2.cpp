//심화_20p_문제1
//int a[5] = { 1, 3, 6, 4, 2 }; 일 때, 최솟값, 최대값,
//원소의 총합, 평균을 출력하라.
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
//주사위를 열 번 굴려서 나온 값이 저장된 int a[10] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 }
//일 때, 각 주사위 눈이 나온 횟수를 배열에 넣어 출력하라.(누적문제)
//#include <stdio.h>
//
//int main(void)
//{
//    int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
//    int cnt[7] = { 0 };
//    int i;
//    for (i = 0; i < 10; i++) {
//        int x = a[i];
//        cnt[x]++;
//    }
//    for (i = 1; i <= 6; i++) {
//        printf("%d: %d\n", i, cnt[i]);
//    }
//    return 0;
//}