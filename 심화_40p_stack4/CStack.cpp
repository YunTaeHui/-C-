#include "CStack.h"
#include <stdio.h>

void CStack::push() //멤버 함수 => 메서드
{
	printf("stack에 넣을 값을 입력해주세요: ");
	int value;
	scanf("%d", &value);
	if (top > MAX_STACK) {
		printf("Stack Overflow! (더 이상 push 불가)\n");
	}
	stack_buff[top++] = value;
}

int CStack::pop()
{
	if (top <= 0) {
		printf("Stack Underflow! (Stack 이 없습니다)\n");
		return -1;
	}
	return stack_buff[--top];
}

void CStack::print_stack()
{
	printf("\n<stack 내부>\n");
	for (int i = 0; i < top; i++) {
		printf(" | %d", stack_buff[i]);
	}
	printf("\n\n");
}

int CStack::load_stack()
{
	FILE* StackFile = fopen("save_stack.txt", "r");
	if (!StackFile) {
		printf("[파일 없음]\n");
		return 0;
	}
	fscanf(StackFile, "%d", &top);
	if (top < 0) top = 0;
	if (top > MAX_STACK) top = MAX_STACK;

	for (int i = 0; i < top; i++) {
		fscanf(StackFile, "%d", &stack_buff[i]);
	}
	fclose(StackFile);
	return 1;
}

int CStack::save_stack()
{
	FILE* StackFile = fopen("save_stack.txt", "w");
	if (!StackFile) {
		printf("[저장 실패]\n");
		return 0;
	}
	fprintf(StackFile, "%d\n", top);
	for (int i = 0; i < top; i++) {
		fprintf(StackFile, "%d ", stack_buff[i]);
	}
	fprintf(StackFile, "\n");
	fclose(StackFile);
	return 1;
}