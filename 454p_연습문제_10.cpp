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

	printf("�̸� �Ǵ� �μ� --> ");
	scanf("%s", e1.nm.name);
	printf("��ȭ��ȣ �Ǵ� �繫�� --> ");
	scanf("%s", e1.id.jumin);

	printf("\n-- ����ü/����ü ȥ�� Ȱ�� --\n");
	printf("�̸�/�μ� ==> %s\n", e1.nm.name);
	printf("��ȭ��ȣ/�繫�� ==> %s\n", e1.id.phone);

	return 0;
}