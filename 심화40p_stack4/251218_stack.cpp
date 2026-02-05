//심화_39p_예제_stack코드
//#include <stdio.h>
//int main()
//{
//	int stack_buff[256];
//	int top = 0, value, choice;
//	bool while_flag = true;
//
//	while (while_flag) {
//		printf("[stack]\n1. push\n2. pop\n(그 외 입력: 종료): ");
//		scanf("%d", &choice);
//
//		switch (choice) {
//		case 1:
//			printf("stack에 넣을 값을 입력해주세요: ");
//			scanf("%d", &value);
//			stack_buff[top++] = value;
//			break;
//		case 2:
//			if (top > 0)
//				printf("빠져나온값: %d\n", stack_buff[--top]);
//			else
//				printf("stack 이 비어있습니다.\n");
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		printf("\n<stack 내부>\n");
//		for (int i = 0; i < top; i++) {
//			printf(" | %d", stack_buff[i]);
//		}
//		printf("\n\n");
//	}
//	return 0;
//}


//심화_39p_stack문제1
//#include <stdio.h>
//#define MAX_STACK 256
//
//struct STACK {
//	int stack_buff[MAX_STACK];
//	int top;
//};
//
//int menu() {
//	printf("[stack]\n1. push\n2. pop\n(그 외 입력: 종료): ");
//	int choice;
//	scanf("%d", &choice);
//	return choice;
//}
//void push(int stack[], int* top) {
//	printf("stack에 넣을 값을 입력해주세요: ");
//	int value;
//	scanf("%d", &value);
//	if (*top > MAX_STACK) {
//		printf("Stack Overflow! (더 이상 push 불가)\n");
//	}
//	stack[(*top)++] = value;
//}
//int pop(int stack[], int *top) {
//	if (*top <= 0) {
//		printf("Stack Underflow! (Stack 이 없습니다)\n");
//		return -1;
//	}
//	return stack[--(*top)];
//}
//void print_stack(int stack[], int top) {
//	printf("\n<stack 내부>\n");
//	for (int i = 0; i < top; i++) {
//		printf(" | %d", stack[i]);
//	}
//	printf("\n\n");
//}
//
//int main()
//{
//	int stack_buff[MAX_STACK];
//	int top = 0;
//	int ret;
//	bool while_flag = true;
//
//	while (while_flag) {
//		int choice = menu();
//
//		switch (choice) {
//		case 1:
//			push(stack_buff, &top);
//			break;
//		case 2:
//			ret = pop(stack_buff, &top);
//
//			if (ret >= 0) {
//				printf("빠져나온값: %d\n", ret);
//			}
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		print_stack(stack_buff, top);
//	}
//	return 0;
//}


//심화_39p_stack문제4
//#include <stdio.h>
//#define MAX_STACK 256
//
//struct STACK {
//	int stack_buff[MAX_STACK];
//	int top;
//};
//
//int menu() {
//	printf("[stack]\n1. push\n2. pop\n(그 외 입력: 종료): ");
//	int choice;
//	scanf("%d", &choice);
//	return choice;
//}
//void push(STACK& st) {
//	printf("stack에 넣을 값을 입력해주세요: ");
//	int value;
//	scanf("%d", &value);
//	if (st.top > MAX_STACK) {
//		printf("Stack Overflow! (더 이상 push 불가)\n");
//	}
//	st.stack_buff[st.top++] = value;
//}
//int pop(STACK& st) {
//	if (st.top <= 0) {
//		printf("Stack Underflow! (Stack 이 없습니다)\n");
//		return -1;
//	}
//	return st.stack_buff[--st.top];
//}
//void print_stack(STACK& st) {
//	printf("\n<stack 내부>\n");
//	for (int i = 0; i < st.top; i++) {
//		printf(" | %d", st.stack_buff[i]);
//	}
//	printf("\n\n");
//}
//
//int main()
//{
//	STACK st;
//	st.top = 0;
//	int ret;
//	bool while_flag = true;
//
//	while (while_flag) {
//		int choice = menu();
//
//		switch (choice) {
//		case 1:
//			push(st);
//			break;
//		case 2:
//			ret = pop(st);
//
//			if (ret >= 0) {
//				printf("빠져나온값: %d\n", ret);
//			}
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		print_stack(st);
//	}
//	return 0;
//}


//심화_39p_stack문제3
//#include <stdio.h>
//#define MAX_STACK 256
//
//struct STACK {
//	int stack_buff[MAX_STACK];
//	int top;
//};
//
//void push(STACK& st) {
//	printf("stack에 넣을 값을 입력해주세요: ");
//	int value;
//	scanf("%d", &value);
//	if (st.top > MAX_STACK) {
//		printf("Stack Overflow! (더 이상 push 불가)\n");
//	}
//	st.stack_buff[st.top++] = value;
//}
//int pop(STACK& st) {
//	if (st.top <= 0) {
//		printf("Stack Underflow! (Stack 이 없습니다)\n");
//		return -1;
//	}
//	return st.stack_buff[--st.top];
//}
//void print_stack(STACK& st) {
//	printf("\n<stack 내부>\n");
//	for (int i = 0; i < st.top; i++) {
//		printf(" | %d", st.stack_buff[i]);
//	}
//	printf("\n\n");
//}
//int load_stack(STACK& st) {
//	FILE* StackFile = fopen("save_stack.txt", "r");
//	if (!StackFile) {
//		printf("[파일 없음]\n");
//		return 0;
//	}
//	fscanf(StackFile, "%d", &st.top);
//	if (st.top < 0) st.top = 0;
//	if (st.top > MAX_STACK) st.top = MAX_STACK;
//
//	for (int i = 0; i < st.top; i++) {
//		fscanf(StackFile, "%d", &st.stack_buff[i]);
//	}
//	fclose(StackFile);
//	return 1;
//}
//int save_stack(const STACK& st) {
//	FILE* StackFile = fopen("save_stack.txt", "w");
//	if (!StackFile) {
//		printf("[저장 실패]\n");
//		return 0;
//	}
//	fprintf(StackFile, "%d\n", st.top);
//	for (int i = 0; i < st.top; i++) {
//		fprintf(StackFile, "%d ", st.stack_buff[i]);
//	}
//	fprintf(StackFile, "\n");
//	fclose(StackFile);
//	return 1;
//}
//
//int menu() {
//	printf("[stack]\n1. push\n2. pop\n(그 외 입력: 종료): ");
//	int choice;
//	scanf("%d", &choice);
//	return choice;
//}
//int main()
//{
//	STACK st;
//	st.top = 0;
//	int ret;
//	bool while_flag = true;
//
//	int loaded = load_stack(st);
//
//	if (loaded) {
//		printf("[파일 복원]\n");
//	}
//	else {
//		printf("[새로 시작]\n");
//	}
//	print_stack(st);
//
//	while (while_flag) {
//		int choice = menu();
//
//		switch (choice) {
//		case 1:
//			push(st);
//			break;
//		case 2:
//			ret = pop(st);
//
//			if (ret >= 0) {
//				printf("빠져나온값: %d\n", ret);
//			}
//			break;
//		default:
//			while_flag = false;
//			save_stack(st);
//			break;
//		}
//		print_stack(st);
//	}
//	return 0;
//}


//심화_39p_stack문제5
#include <stdio.h>
#include "CStack.h"

int menu() {
	printf("[stack]\n1. push\n2. pop\n(그 외 입력: 종료): ");
	int choice;
	scanf("%d", &choice);
	return choice;
}
int main()
{
	CStack st;
	st.top = 0;
	int ret;
	bool while_flag = true;

	int loaded = st.load_stack();

	if (loaded) {
		printf("[파일 복원]\n");
	}
	else {
		printf("[새로 시작]\n");
	}
	st.print_stack();

	while (while_flag) {
		int choice = menu();

		switch (choice) {
		case 1:
			st.push();
			break;
		case 2:
			ret = st.pop();

			if (ret >= 0) {
				printf("빠져나온값: %d\n", ret);
			}
			break;
		default:
			while_flag = false;
			st.save_stack();
			break;
		}
		st.print_stack();
	}
	return 0;
}