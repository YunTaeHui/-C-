//심화_20p_문제1
//#include <stdio.h>
//
//int main(void)
//{
//    int a[5] = { 1, 3, 6, 4, 2 };
//    int i;
//    int min = a[0];
//    int max = a[0];
//    int sum = 0;
//    double avg;
//
//    for (i = 0; i < 5; i++) {
//        if (a[i] < min)
//            min = a[i];
//        if (a[i] > max)
//            max = a[i];
//
//        sum += a[i];
//    }
//
//    avg = (double)sum / 5;
//
//    printf("min = %d\n", min);
//    printf("max = %d\n", max);
//    printf("sum = %d\n", sum);
//    printf("avg = %.2f\n", avg);
//
//    return 0;
//}


//심화_20p_문제2
#include <stdio.h>

int main(void)
{
    int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
    int cnt[7] = { 0 };
    int i;

    // 각 눈의 개수 누적
    for (i = 0; i < 10; i++) {
        int x = a[i];
        cnt[x]++;
    }

    // 결과 출력
    for (i = 1; i <= 6; i++) {
        printf("%d: %d\n", i, cnt[i]);
    }

    return 0;
}