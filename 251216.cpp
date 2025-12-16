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


//심화_37p_문제3-4 단어를 틀린경우 목록추가
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//#define MAXENERGY 6
//#define MAX_LEN 100
//
//void printenergy(int my)
//{
//	printf("내 목숨 : ");
//	for (int i = 0; i < my; i++)
//		printf("■");
//	for (int i = my; i < MAXENERGY; i++)
//		printf("□");
//	printf("\n");
//}
////메모장에서 값을 받아오고 메모리할당하는 함수
//char* random_num(const char* filename)
//{
//	FILE* aFile = fopen("words.txt", "r");
//	int N;
//	fscanf(aFile, "%d", &N);
//	int idx = rand() % N;
//	char buff[MAX_LEN];
//
//	for (int i = 0; i <= idx; i++) {
//		fscanf(aFile, "%s", buff);
//	}
//	fclose(aFile);
//	int len = strlen(buff);
//	char* tmp = (char*)malloc(len + 1);
//	strcpy(tmp, buff);
//	return tmp;
//}
////게임을 진행하는 함수
//void play_game(const char* answer)
//{
//	int len = strlen(answer);
//	char* num = (char*)malloc(len + 1);
//	for (int i = 0; i < len; i++) {
//		num[i] = '_';
//	}
//	num[len] = '\0';
//
//	int energy = MAXENERGY;
//	char input;
//
//	char except[MAXENERGY] = {};
//	int wrongCount = 0;
//
//	while (1) {
//		printenergy(energy);
//		if (energy == 0) {
//			printf("게임 오버...\n");
//			printf("정답 : %s", answer);
//			break;
//		}
//		printf("단어 : %s\n\n", num);
//		if (strcmp(num, answer) == 0) {
//			printf("게임 승리!\n");
//			printf("정답 : %s", answer);
//			break;
//		}
//		printf("알파벳 한 글자를 맞춰보세요: ");
//		scanf(" %c", &input);
//		bool check = true;
//		for (int i = 0; i < len; i++) {
//			if (answer[i] == input) {
//				num[i] = input;
//				check = false;
//			}
//		}
//		if (check == 1) {
//			bool dup = true;
//			for (int i = 0; i < MAXENERGY - energy; i++) {
//				if (except[i] == input) {
//					dup = 0;
//					break;
//				}
//			}
//			if (dup && energy > 0) {
//				except[wrongCount++] = input;
//				energy--;
//			}
//			printf("없는 글자: ");
//			for (int i = 0; i < MAXENERGY - energy; i++) {
//				printf("%c ", except[i]);
//			}
//			printf("\n");
//		}
//	}
//	free(num);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//메모장에서 값을 받아오고 메모리할당하는 함수
//	char* tmp = random_num("words.txt");
//	//게임을 진행하는 함수
//	play_game(tmp);
//
//	free(tmp);
//	return 0;
//}


//심화_38p_문제
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int whowhat(const char* who, int what)
{

	if (comp == 0) printf("%s : 가위\n\n", who);
	else if (comp == 1) printf("%s : 바위\n\n");
	else printf("컴퓨터 : 보\n\n");
	return comp;
}

int compare_victory(int com, int me)
{
	whowhat("컴퓨터", com);

	if (comp == your) return 2;
	else if ((comp + 1) % 3 == your) return 1;
	else return 0;
}

void main()
{
	int com = 0;
	int me = 0;
	char ask_finish = 0;
	int human = 0, computer = 0, draw = 0;
	int tmp = 0;

	srand(time(NULL));

	FILE* aFile = fopen("srp_result.txt", "w");

	const char* hand_name[] = { "가위", "바위", "보" };

	while (true) {
		printf("0:가위, 1:바위, 2:보\n당신이 낼 것은?: ");
		int your;
		scanf("%d", &your);

		if (whowhat("사람", me) == -1) {
			continue;
		}

		int comp = rand() % 3;
		tmp = compare_victory(com, me);

		if (tmp == 0) {
			printf("컴퓨터가 이겼습니다.\n");
			computer++;
		}
		else if (tmp == 1) {
			printf("사람이 이겼습니다.\n");
			human++;
		}
		else if (tmp == 2) {
			printf("비겼습니다.\n");
			draw++;
		}

		fprintf(aFile, "컴퓨터: %s, 사람: %s -> ",
			hand_name[com], hand_name[me]);
		if (tmp == 0) fprintf(aFile, "컴퓨터 승리\n\n");
		else if (tmp == 1) fprintf(aFile, "사람 승리\n\n");
		else if (tmp == 2) fprintf(aFile, "무승부\n\n");

		printf("\n사람이 이긴 횟수 = %d\n", human);
        printf("컴퓨터가 이긴 횟수 = %d\n", computer);
        printf("무승부 횟수 = %d\n", draw);
 
		printf("다시게임을 하시겠습니까?(y/n) : ");
		do {
			ask_finish = (char)getchar();
		} while (ask_finish == '\n');
		if (ask_finish == 'n')
			break;
		printf("\n");
	}
	fclose(aFile);

	printf("\n===== 파일에서 불러온 결과 값 =====\n");
	aFile = fopen("srp_result.txt", "r");
	char line[128];
	while (!feof(aFile)) {
		fgets(line, sizeof(line), aFile);
		printf("%s", line);
	}
	fclose(aFile);
}