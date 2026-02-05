//심화_39p_예제_queue코드
//#include <stdio.h>
//#define MAXSIZE 10
//
//int queue[MAXSIZE];
//int front, rear;
//
//void init_queue(void) {		//시작을 알리는 함수
//	front = rear = 0;		//front, rear에 초기값 0 입력
//	printf("QUEUE SIZE is %d\n\n", MAXSIZE);	//QUEUE SIZE 크기인 10 출력
//}
//void clear_queue(void) {
//	front = rear;
//}
//int enqueue(int val) {			//인자 값을 큐에 넣는 함수
//	if ((rear + 1) % MAXSIZE == front) {	//큐가 꼭 찼는지 확인
//		printf("Queue Overflow, \n");
//		return -1;
//	}
//	queue[rear] = val;			//rear 큐의 끝 다음의 빈공간이므로 인자를 바로 저장
//	rear = ++rear % MAXSIZE;	//rear를 다음 빈공간으로 변경
//	return val;
//}
//int dequeue(void) {
//	int i;
//	if (front == rear) {		//큐가 비어 있는지 확인
//		printf("Queue Overflow, \n");
//		return -1;
//	}
//	i = queue[front];			//front의 값을 가져옴
//	front = ++front % MAXSIZE;	//front를 다음 데이터 요소로
//	return i;
//}
//void print_queue(void) {
//	int i;
//	printf("Queue From Front ----> To Rear \n");	//큐 출력
//	for (i = front; i != rear; i = ++i % MAXSIZE)	//i는 0부터 마지막 큐까지 그 다음은 0부터 다시
//		printf("%-6d", queue[i]);
//	printf("\n");
//}
//void main(void)
//{
//	int i;
//	init_queue();
//	printf(" \n push 5, 4, 7, 8, 2, 1\n");
//	enqueue(5);
//	enqueue(4);
//	enqueue(7);
//	enqueue(8);
//	enqueue(2);
//	enqueue(1);
//	print_queue();
//
//	printf(" \n Pop");
//	i = dequeue();
//	print_queue();
//	printf(" pop value is %d\n", i);
//
//	printf(" \n push 3, 2, 5, 7");
//	enqueue(3);
//	enqueue(2);
//	enqueue(5);
//	enqueue(7);
//	print_queue();
//
//	printf(" \n Now queue is full, push 3\n");
//	enqueue(3);
//	print_queue();
//
//	printf(" \n Initialize Queue\n");
//	clear_queue();
//	print_queue();
//
//	printf(" \n Now queue is empty, pop\n");
//	i = dequeue();
//	print_queue();
//
//	printf(" pop value is %d\n", i);
//}


//심화_39p_queue문제2_print가 자동으로 되도록 하기
//#include <stdio.h>
//#define MAXSIZE 10
//
//int queue[MAXSIZE];
//int front, rear;
//
//void init_queue(void) {		//시작을 알리는 함수
//	front = rear = 0;		//front, rear에 초기값 0 입력
//	printf("QUEUE SIZE is %d\n\n", MAXSIZE);	//QUEUE SIZE 크기인 10 출력
//}
//void clear_queue(void) {
//	front = rear;
//}
//int enqueue(int val) {			//인자 값을 큐에 넣는 함수
//	if ((rear + 1) % MAXSIZE == front) {	//큐가 꼭 찼는지 확인
//		printf("Queue Overflow, \n");
//		return -1;
//	}
//	queue[rear] = val;			//rear 큐의 끝 다음의 빈공간이므로 인자를 바로 저장
//	rear = ++rear % MAXSIZE;	//rear를 다음 빈공간으로 변경
//	return val;
//}
//int dequeue(void) {
//	int i;
//	if (front == rear) {		//큐가 비어 있는지 확인
//		printf("Queue Overflow, \n");
//		return -1;
//	}
//	i = queue[front];			//front의 값을 가져옴
//	front = ++front % MAXSIZE;	//front를 다음 데이터 요소로
//	return i;
//}
//void print_queue(void) {
//	int i;
//	printf("Queue From Front ----> To Rear \n");	//큐 출력
//	for (i = front; i != rear; i = ++i % MAXSIZE)	//i는 0부터 마지막 큐까지 그 다음은 0부터 다시
//		printf("%-6d", queue[i]);
//	printf("\n");
//}
//int main(void)
//{
//	int menu, val, ret;
//	init_queue();
//	
//	while (1) {
//		printf("\n===== Queue Menu =====\n");
//		printf("1) Enqueue (push)\n");
//		printf("2) Dequeue (pop)\n");
//		printf("3) Clear_Queue\n");
//		printf("4) Exit\n");
//
//		printf("Select: ");
//		scanf("%d", &menu);
//
//		switch (menu) {
//		case 1:
//			printf("Input Value\n");
//			scanf("%d", &val);
//			ret = enqueue(val);
//			print_queue();
//			break;
//
//		case 2:
//			ret = dequeue();
//			printf("Output Value: %d\n", ret);
//			print_queue();
//			break;
//
//		case 3:
//			clear_queue();
//			printf("Cleared Queue.\n");
//			print_queue();
//			break;
//
//		case 4:
//			printf("Exited.\n");
//			return 0;
//
//		default:
//			printf("Wrong Menu.\n");
//			break;
//		}
//	}
//	return 0;
//}


//심화_39p_queue문제3
//#include <stdio.h>
//#define MAXSIZE 10
//
//int queue[MAXSIZE];
//int front, rear;
//
//void init_queue(void) {		//시작을 알리는 함수
//	front = rear = 0;		//front, rear에 초기값 0 입력
//	printf("QUEUE SIZE is %d\n\n", MAXSIZE);	//QUEUE SIZE 크기인 10 출력
//}
//void clear_queue(void) {
//	front = rear;
//}
//int enqueue(int val) {			//인자 값을 큐에 넣는 함수
//	if ((rear + 1) % MAXSIZE == front) {	//큐가 꼭 찼는지 확인
//		printf("Queue Overflow, \n");
//		return -1;
//	}
//	queue[rear] = val;			//rear 큐의 끝 다음의 빈공간이므로 인자를 바로 저장
//	rear = ++rear % MAXSIZE;	//rear를 다음 빈공간으로 변경
//	return val;
//}
//int dequeue(void) {
//	int i;
//	if (front == rear) {		//큐가 비어 있는지 확인
//		printf("Queue Overflow, \n");
//		return -1;
//	}
//	i = queue[front];			//front의 값을 가져옴
//	front = ++front % MAXSIZE;	//front를 다음 데이터 요소로
//	return i;
//}
//void print_queue(void) {
//	int i;
//	printf("Queue From Front ----> To Rear \n");	//큐 출력
//	for (i = front; i != rear; i = ++i % MAXSIZE)	//i는 0부터 마지막 큐까지 그 다음은 0부터 다시
//		printf("%-6d", queue[i]);
//	printf("\n");
//}
//int load_queue(const char* filename) {
//	FILE* QueueFile = fopen(filename, "r");
//	if (!QueueFile) {
//		printf("[파일 없음]\n");
//		return 0;
//	}
//	int f, r;
//	fscanf(QueueFile, "%d %d", &f, &r);
//	if (f<0 || f>MAXSIZE || r<0 || r>MAXSIZE) {
//		fclose(QueueFile);
//		return 0;
//	}
//
//	for (int i = 0; i < MAXSIZE; i++) {
//		fscanf(QueueFile, "%d", &queue[i]);
//	}
//	fclose(QueueFile);
//	front = f;
//	rear = r;
//	return 1;
//}
//int save_queue(const char* filename) {
//	FILE* QueueFile = fopen(filename, "w");
//	if (!QueueFile) {
//		printf("[저장 실패]\n");
//		return 0;
//	}
//	fprintf(QueueFile, "%d %d\n", front, rear);
//	for (int i = 0; i < MAXSIZE; i++) {
//		fprintf(QueueFile, "%d ", queue[i]);
//	}
//	fprintf(QueueFile, "\n");
//	fclose(QueueFile);
//	return 1;
//}
//
//int main(void)
//{
//	int menu, val, ret;
//	init_queue();
//	
//	if (load_queue("save_queue.txt")) {
//		printf("[파일 복원]\n");
//	}
//	else {
//		printf("[새로 시작]\n");
//	}
//	print_queue();
//
//	while (1) {
//		printf("\n===== Queue Menu =====\n");
//		printf("1) Enqueue (push)\n");
//		printf("2) Dequeue (pop)\n");
//		printf("3) Clear_Queue\n");
//		printf("4) Exit\n");
//
//		printf("Select: ");
//		scanf("%d", &menu);
//
//		switch (menu) {
//		case 1:
//			printf("Input Value\n");
//			scanf("%d", &val);
//			ret = enqueue(val);
//			print_queue();
//			break;
//
//		case 2:
//			ret = dequeue();
//			printf("Output Value: %d\n", ret);
//			print_queue();
//			break;
//
//		case 3:
//			clear_queue();
//			printf("Cleared Queue.\n");
//			print_queue();
//			break;
//
//		case 4:
//			printf("Exited.\n");
//			save_queue("save_queue.txt");
//			return 0;
//
//		default:
//			printf("Wrong Menu.\n");
//			break;
//		}
//	}
//	return 0;
//}


//심화_39p_queue문제5
#include <stdio.h>
#include "CStack.h"

int main(void)
{
	CStack st;
	int menu, val, ret;
	st.init_queue();

	if (st.load_queue("save_queue.txt")) {
		printf("[파일 복원]\n");
	}
	else {
		printf("[새로 시작]\n");
	}
	st.print_queue();

	while (1) {
		printf("\n===== Queue Menu =====\n");
		printf("1) Enqueue (push)\n");
		printf("2) Dequeue (pop)\n");
		printf("3) Clear_Queue\n");
		printf("4) Exit\n");

		printf("Select: ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			printf("Input Value\n");
			scanf("%d", &val);
			ret = st.enqueue(val);
			st.print_queue();
			break;

		case 2:
			ret = st.dequeue();
			printf("Output Value: %d\n", ret);
			st.print_queue();
			break;

		case 3:
			st.clear_queue();
			printf("Cleared Queue.\n");
			st.print_queue();
			break;

		case 4:
			printf("Exited.\n");
			st.save_queue("save_queue.txt");
			return 0;

		default:
			printf("Wrong Menu.\n");
			break;
		}
	}
	return 0;
}