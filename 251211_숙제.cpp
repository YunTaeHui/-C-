//심화_38p예제
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int compare_victory(int com, int me)
//{
//	if (com == 0)
//	{
//		printf("컴퓨터 : 가위\n\n");
//		if (me == 0) return 2;
//		else if (me == 1) return 1;
//		else if (me == 2) return 0;
//	}
//	else if (com == 1) {
//		printf("컴퓨터 : 바위\n\n");
//		if (me == 0) return 0;
//		else if (me == 1) return 2;
//		else if (me == 2) return 1;
//	}
//	else if (com == 2) {
//		printf("컴퓨터 : 보\n\n");
//		if (me == 0) return 1;
//		else if (me == 1) return 0;
//		else if (me == 2) return 2;
//	}
//}
//void main()
//{
//	int com = 0;
//	int me = 0;
//	char ask_finish = 0;
//	int human = 0, computer = 0, draw = 0;
//	int tmp = 0;
//
//	srand(time(NULL));
//
//	while (true) {
//		com = rand() % 3;
//		printf("0:가위, 1:바위, 2:보\n당신이 낼 것은?: ");
//		scanf("%d", &me);
//		if (me == 0) printf("당신: 가위\n");
//		else if (me == 1) printf("당신: 바위\n");
//		else if (me == 2) printf("당신: 보\n");
//		else {
//			printf("\n반칙! 다시 내 주세요.\n\n");
//			continue;
//		}
//		tmp = compare_victory(com, me);
//		if (tmp == 0) {
//			printf("컴퓨터가 이겼습니다.\n");
//			computer++;
//		}
//		else if (tmp == 1) {
//			printf("사람이 이겼습니다.\n");
//			human++;
//		}
//		else if (tmp == 2) {
//			printf("비겼습니다.\n");
//			draw++;
//		}
//		printf("\n사람이 이긴 횟수 = %d\n", human);
//        printf("컴퓨터가 이긴 횟수 = %d\n", computer);
//        printf("무승부 횟수 = %d\n", draw);
// 
//		printf("다시게임을 하시겠습니까?(y/n) : ");
//		do {
//			ask_finish = (char)getchar();
//		} while (ask_finish == '\n');
//		if (ask_finish == 'n')
//			break;
//		printf("\n");
//	}
//}




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