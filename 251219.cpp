//심화_38p_문제3_최종(검사완료)
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define LOSE 0
//#define WIN 1
//#define DRAW 2
//
//const char* hands_to_str(int what) {
//    static const char* hand_name[] = { "가위", "바위", "보" };
//    return hand_name[what];
//}
//int whowhat(const char* who, int what) {
//    printf("%s : %s \n", who, hands_to_str(what));
//    return what;
//}
//int compare_victory(int com, int me)
//{
//    whowhat("컴퓨터", com);
//
//    if (com == me) return DRAW;
//    else if ((com + 1) % 3 == me) return WIN;
//    else return LOSE;
//}
//void get_hands(int* pCom, int* pMe)
//{
//    *pCom = rand() % 3;
//
//    while (1) {
//        printf("0:가위, 1:바위, 2:보\n당신이 낼 것은?: ");
//        int me;
//        int ret = scanf("%d", &me);
//        if (ret != 1) {
//            int ch;
//            while ((ch = getchar()) != '\n' && ch != EOF) {}
//            printf("문자를 입력했습니다. 다시내주세요\n\n");
//            continue;
//        }
//        if (me >= 0 && me <= 2) {
//            whowhat("당신", me);
//            *pMe = me;
//            return;
//        }
//        else {
//            printf("\n반칙! 다시 내 주세요.\n\n");
//        }
//    }
//}
//void load_score(int* human, int* computer, int* draw) {
//    FILE* bFile = fopen("srp_state1.txt", "r");
//    if (bFile != NULL) {
//        fscanf(bFile, "%d %d %d", human, computer, draw);
//        fclose(bFile);
//    }
//}
//void save_score(int human, int computer, int draw) {
//    FILE* bFile = fopen("srp_state1.txt", "w");
//    fprintf(bFile, "%d %d %d\n", human, computer, draw);
//    fclose(bFile);
//}
//
//int main()
//{
//    int com = 0;
//    int me = 0;
//    char ask_finish = 0;
//    int human = 0, computer = 0, draw = 0;
//    int tmp = 0;
//
//    load_score(&human, &computer, &draw);
//    printf("이전 게임 결과: 당신=%d, 컴퓨터=%d, 무승부=%d\n\n", human, computer, draw);
//
//    srand(time(NULL));
//
//    FILE* aFile = fopen("srp_result.txt", "a");
//    fprintf(aFile, "\n시작 누적: 당신=%d, 컴퓨터=%d, 무승부=%d\n\n", human, computer, draw);
//
//    while (true) {
//
//        get_hands(&com, &me);
//
//        tmp = compare_victory(com, me);
//        if (tmp == LOSE) {
//            printf("컴퓨터가 이겼습니다.\n");
//            computer++;
//        }
//        else if (tmp == WIN) {
//            printf("당신이 이겼습니다.\n");
//            human++;
//        }
//        else if (tmp == DRAW) {
//            printf("비겼습니다.\n");
//            draw++;
//        }
//
//        fprintf(aFile, "\n당신: %s, 컴퓨터: %s -> ", hands_to_str(me), hands_to_str(com));
//        if (tmp == LOSE)      fprintf(aFile, "컴퓨터 승\n");
//        else if (tmp == WIN) fprintf(aFile, "당신 승\n");
//        else               fprintf(aFile, "무승부\n");
//        fprintf(aFile, "누적: 당신=%d, 컴퓨터=%d, 무승부=%d\n", human, computer, draw);
//
//        printf("\n당신이 이긴 횟수 = %d\n", human);
//        printf("컴퓨터가 이긴 횟수 = %d\n", computer);
//        printf("동점 횟수 = %d\n", draw);
//
//        printf("다시게임을 하시겠습니까?(y/n) : ");
//        do {
//            ask_finish = (char)getchar();
//        } while (ask_finish == '\n');
//        if (ask_finish == 'n')
//            break;
//        printf("\n");
//    }
//    fclose(aFile);
//
//    save_score(human, computer, draw);
//
//    aFile = fopen("srp_result.txt", "r");
//
//    printf("\n===== 이번 게임 기록 (파일에서 읽기) =====\n");
//    char line[256];
//    if (aFile) {
//        while (fgets(line, sizeof(line), aFile)) {
//            printf("%s", line);
//        }
//        fclose(aFile);
//    }
//    return 0;
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


//심화_39p_queue문제2_print가 자동으로 되도록 하기
//#include <stdio.h>
//#define MAXSIZE 10
//
//int queue[MAXSIZE];
//int front, rear;
//
//void init_queue(void) {		//시작을 알리는 함수
//    front = rear = 0;		//front, rear에 초기값 0 입력
//    printf("QUEUE SIZE is %d\n\n", MAXSIZE);	//QUEUE SIZE 크기인 10 출력
//}
//void clear_queue(void) {
//    front = rear;
//}
//int enqueue(int val) {			//인자 값을 큐에 넣는 함수
//    if ((rear + 1) % MAXSIZE == front) {	//큐가 꼭 찼는지 확인
//        printf("Queue Overflow, \n");
//        return -1;
//    }
//    queue[rear] = val;			//rear 큐의 끝 다음의 빈공간이므로 인자를 바로 저장
//    rear = ++rear % MAXSIZE;	//rear를 다음 빈공간으로 변경
//    return val;
//}
//int dequeue(void) {
//    int i;
//    if (front == rear) {		//큐가 비어 있는지 확인
//        printf("Queue Overflow, \n");
//        return -1;
//    }
//    i = queue[front];			//front의 값을 가져옴
//    front = ++front % MAXSIZE;	//front를 다음 데이터 요소로
//    return i;
//}
//void print_queue(void) {
//    int i;
//    printf("Queue From Front ----> To Rear \n");	//큐 출력
//    for (i = front; i != rear; i = ++i % MAXSIZE)	//i는 0부터 마지막 큐까지 그 다음은 0부터 다시
//        printf("%-6d", queue[i]);
//    printf("\n");
//}
//int main(void)
//{
//    int menu, val, ret;
//    init_queue();
//
//    while (1) {
//        printf("\n===== Queue Menu =====\n");
//        printf("1) Enqueue (push)\n");
//        printf("2) Dequeue (pop)\n");
//        printf("3) Clear_Queue\n");
//        printf("4) Exit\n");
//
//        printf("Select: ");
//        scanf("%d", &menu);
//
//        switch (menu) {
//        case 1:
//            printf("Input Value\n");
//            scanf("%d", &val);
//            ret = enqueue(val);
//            print_queue();
//            break;
//
//        case 2:
//            ret = dequeue();
//            printf("Output Value: %d\n", ret);
//            print_queue();
//            break;
//
//        case 3:
//            clear_queue();
//            printf("Cleared Queue.\n");
//            print_queue();
//            break;
//
//        case 4:
//            printf("Exited.\n");
//            return 0;
//
//        default:
//            printf("Wrong Menu.\n");
//            break;
//        }
//    }
//    return 0;
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


//심화_39p_stack문제1
#include <stdio.h>
#define MAX_STACK 256

int menu() {
	printf("[stack]\n1. push\n2. pop\n(그 외 입력: 종료): ");
	int choice;
	scanf("%d", &choice);
	return choice;
}
void push(int stack[], int *top) {
	printf("stack에 넣을 값을 입력해주세요: ");
	int value;
	scanf("%d", &value);
	if (*top > MAX_STACK) {
		printf("Stack Overflow! (더 이상 push 불가)\n");
	}
	stack[(*top)++] = value;
}
int pop(int stack[], int* top) {
	if (*top <= 0) {
		printf("Stack Underflow! (Stack 이 없습니다)\n");
		return -1;
	}
	return stack[--(*top)];
}
void print_stack(int stack[], int top) {
	printf("\n<stack 내부>\n");
	for (int i = 0; i < top; i++) {
		printf(" | %d", stack[i]);
	}
	printf("\n\n");
}

int main()
{
	int stack_buff[256];
	int top = 0, value, choice;
	int ret;
	bool while_flag = true;

	while (while_flag) {
		int choice = menu();

		switch (choice) {
		case 1:
			push(stack_buff, &top);
			break;
		case 2:
			ret = pop(stack_buff, &top);

			if (ret >= 0) {
				printf("빠져나온값: %d\n", ret);
			}
			break;
		default:
			while_flag = false;
			break;
		}
		print_stack(stack_buff, top);
	}
	return 0;
}


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
//void push(STACK st) {
//	printf("stack에 넣을 값을 입력해주세요: ");
//	int value;
//	scanf("%d", &value);
//	if (*top > MAX_STACK) {
//		printf("Stack Overflow! (더 이상 push 불가)\n");
//	}
//	stack[(*top)++] = value;
//}
//int pop(int stack[], int* top) {
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