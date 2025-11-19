//심화_15p_문제1
//#include <stdio.h>
//
//struct A {
//	int a;
//	int b;
//};
//
//struct B {
//	short s1;
//	short s2;
//	int i;
//};
//
//struct C {
//	double v;
//};
//
//struct D {
//	int  id;
//	char flag;
//	char _flag[3];
//};
//
//int main(void) {
//	printf("%d %d %d %d\n", sizeof(struct A), sizeof(struct B), sizeof(struct C), sizeof(struct D));
//}


//심화_15p_문제2
#include <stdio.h>

struct __dummy__ {
    int   data_0;  // 정수
    char  data_1;  // 문자 하나
    float data_2;  // 부동소수
};

int main(void) {
    struct __dummy__ d;

    printf("data_0(int), data_1(char), data_2(float)을 차례로 입력하세요.\n");

    scanf("%d", &d.data_0);

    scanf(" %c", &d.data_1);

    scanf("%f", &d.data_2);

    printf("입력 결과 → data_0=%d, data_1=%c, data_2=%.2f\n", d.data_0, d.data_1, d.data_2);
    return 0;
}