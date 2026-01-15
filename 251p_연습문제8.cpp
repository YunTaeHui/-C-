//251p_연습문제8
//숫자를 여러 개 입력하고 입력한 수의 2배만큼 하트가 출력되도록 코드를 작성하세요.
//단 반복문은 while 문을 사용하세요.
#include <stdio.h>
int main(void)
{
    int num;
    printf("숫자를 여러 개 입력 : ");
    scanf("%d", &num);

    int max10 = 1;
    int imsi = num;
    while (imsi >= 10) {
        imsi /= 10;
        max10 *= 10;
    }

    while (max10 > 0) {
        int digit = num / max10;
        int heart = 0;
        while (heart < 2 * digit) {
            printf("\u2665");
            heart++;
        }
        printf("\n");

        num %= max10;
        max10 /= 10;
    }
    return 0;
}

//배열 사용
//#include <stdio.h>
//int main(void)
//{
//    int num;
//    printf("숫자를 여러 개 입력 : ");
//    scanf("%d", &num);
//
//    int max10 = 1;
//    int imsi = num;
//    while (imsi >= 10) {
//        imsi /= 10;
//        max10 *= 10;
//    }
//
//    while (max10 > 0) {
//        int digit = num / max10;
//        int heart = 0;
//        while (heart < 2 * digit) {
//            printf("\u2665");
//            heart++;
//        }
//        printf("\n");
//
//        num %= max10;
//        max10 /= 10;
//    }
//    return 0;
//}