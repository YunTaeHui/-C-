//251p_��������_8
//#include <stdio.h>
//
//void main()
//{
//    char str[100];
//    char ch;
//
//    int i, k;
//    int star;
//
//    printf("���ڸ� ���� �� �Է� : ");
//    scanf("%s", str);
//
//    i = 0;
//    ch = str[i];
//    while (ch != '\0') {
//        star = (int)ch - 48;
//
//        k = 0;
//        while (k < star * 2)
//        {
//            printf("\u2665");
//            k++;
//        }
//        printf("\n");
//        i++;
//        ch = str[i];
//    }
//}

#include <stdio.h>

int main(void)
{
    int num;
    printf("���ڸ� ���� �� �Է� : ");
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