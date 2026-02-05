#pragma once
#define MAX_STACK 256

class CStack {
public://전체공개
	int stack_buff[MAX_STACK];
	int top;//멤버 변수

	void push(); //멤버 함수 => 메서드
	
	int pop();
	
	void print_stack();
	
	int load_stack();

	int save_stack();
};
