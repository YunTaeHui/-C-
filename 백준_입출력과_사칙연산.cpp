//1. Hello World!�� ����Ͻÿ�.
//#include <stdio.h>
// 
//int main()
//{
//    printf("Hello World!");
//    return 0;
//}


//2. �� ���� A�� B�� �Է¹��� ����, A + B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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


//3. �� ���� A�� B�� �Է¹��� ����, A - B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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


//4. �� ���� A�� B�� �Է¹��� ����, A��B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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


//5. �� ���� A�� B�� �Է¹��� ����, A / B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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

//6. �� �ڿ��� A�� B�� �־�����. �̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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

//7. ���ϴ� ����Ʈ�� ȸ�������� �ϴٰ� joonas��� ���̵� �̹� �����ϴ� ���� ���� �����.
//���ϴ� ����� ??!�� ǥ���Ѵ�.
//���ϰ� �����Ϸ��� �ϴ� ����Ʈ�� �̹� �����ϴ� ���̵� �־����� ��, ����� ǥ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
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


//8. ICPC Bangkok Regional�� �����ϱ� ���� ���ϳ�ǰ �������׿� �� ������ �� �������Ʈ ������ ���� ���� �� ������.
//������ ���� ��ũ���� ���ذ� 2562���̶�� ���� �ִ� ���̾���.
//�ұ� ������ �±��� �Ҹ���(����Ѻ�), �� ������ϰ� ������ �ظ� �������� ������ ���� �ұ⸦ ����Ѵ�.
//�ݸ�, �츮����� ���� ������ ����ϰ� �ִ�.�ұ� ������ �־��� �� �̸� ���� ������ �ٲ� �ִ� ���α׷��� �ۼ��Ͻÿ�.
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


//9. (A + B) % C��((A% C) + (B % C)) % C �� ������ ?
//(A��B) % C��((A % C) ��(B % C)) % C �� ������ ?
//�� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

//ù° �ٿ� (A+B)%C, ��° �ٿ� ((A%C) + (B%C))%C, ��° �ٿ� (A��B)%C, ��° �ٿ� ((A%C) �� (B%C))%C�� ����Ѵ�.
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

//10. (1)�� (2)��ġ�� �� �� �ڸ� �ڿ����� �־��� �� (3), (4), (5), (6)��ġ�� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
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


//11. ���� �����̴� ���� A + B ������ ���� ����� �� �ִ�. ���� A + B + C�� ����� �����̴�!
//#include <stdio.h>
//
//int main()
//{
//	long long a, b, c;
//	scanf("%lld %lld %lld", &a, &b, &c);
//
//	printf("%lld\n", a + b + c);
//}

//12. �Ʒ� ������ ���� ����̸� ����Ͻÿ�.
//#include <stdio.h>
//
//int main(void) {
//    printf("\\    /\\\n");
//    printf(" )  ( ')\n");
//    printf("(  /  )\n");
//    printf(" \\(__)|\n");
//    return 0;
//}


//13. �Ʒ� ������ ���� ���� ����Ͻÿ�.
#include <stdio.h>

int main(void) {
    printf("|\\_/|\n");
    printf("|q p|   /}\n");
    printf("( 0 )\"\"\"\\\n");
    printf("|\"^\"`    |\n");
    printf("||_/=\\\\__|\n");
    return 0;
}