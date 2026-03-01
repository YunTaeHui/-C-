//1. Hello World!를 출력하시오.
//#include <stdio.h>
// 
//int main()
//{
//    printf("Hello World!");
//    return 0;
//}


//2. 두 정수 A와 B를 입력받은 다음, A + B를 출력하는 프로그램을 작성하시오.
//#include <stdio.h>
//
//int main()
//{
//    int A, B;
//    scanf("%d %d", &A, &B);
//
//    printf("%d \n", A + B);
//
//    return 0;
//}


//3. 두 정수 A와 B를 입력받은 다음, A - B를 출력하는 프로그램을 작성하시오.
//#include <stdio.h>
//
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//
//	printf("%d \n", A - B);
//
//	return 0;
//}


//4. 두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오.
//#include <stdio.h>
//
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//
//	printf("%d\n", A * B);
//
//	return 0;
//}


//5. 두 정수 A와 B를 입력받은 다음, A / B를 출력하는 프로그램을 작성하시오.
//#include <stdio.h>
//
//int main()
//{
//	double A, B;
//	scanf("%lf %lf", &A, &B);
//
//	printf("%.10f\n", A / B);
//	
//	return 0;
//}

//6. 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//	printf("%d\n", a / b);
//	printf("%d\n", a % b);
//
//	return 0;
//}

//7. 준하는 사이트에 회원가입을 하다가 joonas라는 아이디가 이미 존재하는 것을 보고 놀랐다.
//준하는 놀람을 ??!로 표현한다.
//준하가 가입하려고 하는 사이트에 이미 존재하는 아이디가 주어졌을 때, 놀람을 표현하는 프로그램을 작성하시오.
//#include <stdio.h>
//
//int main()
//{
//	char id[51];
//
//	scanf("%s", &id);
//	printf("%s??!\n", id);
//
//	return 0;
//}


//8. ICPC Bangkok Regional에 참가하기 위해 수완나품 국제공항에 막 도착한 팀 레드시프트 일행은 눈을 믿을 수 없었다.
//공항의 대형 스크린에 올해가 2562년이라고 적혀 있던 것이었다.
//불교 국가인 태국은 불멸기원(佛滅紀元), 즉 석가모니가 열반한 해를 기준으로 연도를 세는 불기를 사용한다.
//반면, 우리나라는 서기 연도를 사용하고 있다.불기 연도가 주어질 때 이를 서기 연도로 바꿔 주는 프로그램을 작성하시오.
//2541	1998

//#include <stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a - 543);
//
//	return 0;
//}


//9. (A + B) % C는((A% C) + (B % C)) % C 와 같을까 ?
//(A×B) % C는((A % C) ×(B % C)) % C 와 같을까 ?
//세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

//첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
//#include <stdio.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//
//	printf("%d\n", (a + b) % c);
//	printf("%d\n", ((a % c) + (b % c)) % c);
//	printf("%d\n", ((a * b) % c));
//	printf("%d\n", ((a % c) * (b % c)) % c);
//
//	return 0;
//}

//10. (1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	
//	int one = b % 10;
//	int ten = b / 10 % 10;
//	int hun = b / 100;
//
//	printf("%d\n", a * one);
//	printf("%d\n", a * ten);
//	printf("%d\n", a * hun);
//	printf("%d\n", a * b);
//
//	return 0;
//}


//11. 꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다. 이제 A + B + C를 계산할 차례이다!
//#include <stdio.h>
//
//int main()
//{
//	long long a, b, c;
//	scanf("%lld %lld %lld", &a, &b, &c);
//
//	printf("%lld\n", a + b + c);
//}

//12. 아래 예제와 같이 고양이를 출력하시오.
//#include <stdio.h>
//
//int main(void) {
//    printf("\\    /\\\n");
//    printf(" )  ( ')\n");
//    printf("(  /  )\n");
//    printf(" \\(__)|\n");
//    return 0;
//}


//13. 아래 예제와 같이 개를 출력하시오.
#include <stdio.h>

int main(void) {
    printf("|\\_/|\n");
    printf("|q p|   /}\n");
    printf("( 0 )\"\"\"\\\n");
    printf("|\"^\"`    |\n");
    printf("||_/=\\\\__|\n");
    return 0;
}