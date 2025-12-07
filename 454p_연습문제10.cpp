//454p_연습문제10
//구조체와 공용체를 동시에 사용하는 코드입니다.
//변수명은 name, dept, phone, jumin을 사용하세요.
#include <stdio.h>

int main()
{
	typedef struct _employee {
		union _nm {
			char name[10];
			char dept[10];
		} nm;
		union _id {
			char phone[15];
			char jumin[15];
		} id;
	} employee;

	employee e1;

	printf("이름 또는 부서 --> ");
	scanf("%s", e1.nm.name);
	printf("전화번호 또는 사무실 --> ");
	scanf("%s", e1.id.jumin);

	printf("\n-- 구조체/공용체 혼합 활용 --\n");
	printf("이름/부서 ==> %s\n", e1.nm.name);
	printf("전화번호/사무실 ==> %s\n", e1.id.phone);

	return 0;
}