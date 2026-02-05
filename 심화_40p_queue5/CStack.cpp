#include <stdio.h>
#include "CStack.h"

void CStack::init_queue(void) {		//시작을 알리는 함수
	front = rear = 0;		//front, rear에 초기값 0 입력
	printf("QUEUE SIZE is %d\n\n", MAXSIZE);	//QUEUE SIZE 크기인 10 출력
}

void CStack::clear_queue(void) {
	front = rear;
}

int CStack::enqueue(int val) {			//인자 값을 큐에 넣는 함수
	if ((rear + 1) % MAXSIZE == front) {	//큐가 꼭 찼는지 확인
		printf("Queue Overflow, \n");
		return -1;
	}
	queue[rear] = val;			//rear 큐의 끝 다음의 빈공간이므로 인자를 바로 저장
	rear = ++rear % MAXSIZE;	//rear를 다음 빈공간으로 변경
	return val;
}

int CStack::dequeue(void) {
	int i;
	if (front == rear) {		//큐가 비어 있는지 확인
		printf("Queue Overflow, \n");
		return -1;
	}
	i = queue[front];			//front의 값을 가져옴
	front = ++front % MAXSIZE;	//front를 다음 데이터 요소로
	return i;
}

void CStack::print_queue(void) {
	int i;
	printf("Queue From Front ----> To Rear \n");	//큐 출력
	for (i = front; i != rear; i = ++i % MAXSIZE)	//i는 0부터 마지막 큐까지 그 다음은 0부터 다시
		printf("%-6d", queue[i]);
	printf("\n");
}

int CStack::load_queue(const char* filename) {
	FILE* QueueFile = fopen(filename, "r");
	if (!QueueFile) {
		printf("[파일 없음]\n");
		return 0;
	}
	int f, r;
	fscanf(QueueFile, "%d %d", &f, &r);
	if (f<0 || f>MAXSIZE || r<0 || r>MAXSIZE) {
		fclose(QueueFile);
		return 0;
	}

	for (int i = 0; i < MAXSIZE; i++) {
		fscanf(QueueFile, "%d", &queue[i]);
	}
	fclose(QueueFile);
	front = f;
	rear = r;
	return 1;
}

int CStack::save_queue(const char* filename)
{
	FILE* QueueFile = fopen(filename, "w");
	if (!QueueFile) {
		printf("[저장 실패]\n");
		return 0;
	}
	fprintf(QueueFile, "%d %d\n", front, rear);
	for (int i = 0; i < MAXSIZE; i++) {
		fprintf(QueueFile, "%d ", queue[i]);
	}
	fprintf(QueueFile, "\n");
	fclose(QueueFile);
	return 1;
}