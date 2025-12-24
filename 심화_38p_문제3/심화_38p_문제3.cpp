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


//심화_38p_문제1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int compare_victory(int com, int me)
//{
//    if (com == 0)
//    {
//        printf("컴퓨터 : 가위\n\n");
//        if (me == 0) return 2;
//        else if (me == 1) return 1;
//        else if (me == 2) return 0;
//    }
//    else if (com == 1) {
//        printf("컴퓨터 : 바위\n\n");
//        if (me == 0) return 0;
//        else if (me == 1) return 2;
//        else if (me == 2) return 1;
//    }
//    else if (com == 2) {
//        printf("컴퓨터 : 보\n\n");
//        if (me == 0) return 1;
//        else if (me == 1) return 0;
//        else if (me == 2) return 2;
//    }
//}
//void main()
//{
//    int com = 0;
//    int me = 0;
//    char ask_finish = 0;
//    int human = 0, computer = 0, draw = 0;
//    int tmp = 0;
//
//    //★추가: 손 이름 배열 (파일 기록할 때도 사용)
//    const char* hand_name[] = { "가위", "바위", "보" };
//
//    //★추가: 파일 포인터
//    FILE* aFile = fopen("srp_result.txt", "w");
//
//    srand(time(NULL));
//
//    while (true) {
//        com = rand() % 3;
//        printf("0:가위, 1:바위, 2:보\n당신이 낼 것은?: ");
//        scanf("%d", &me);
//
//        if (me == 0) printf("당신: 가위\n");
//        else if (me == 1) printf("당신: 바위\n");
//        else if (me == 2) printf("당신: 보\n");
//        else {
//            printf("\n반칙! 다시 내 주세요.\n\n");
//            continue;
//        }
//        tmp = compare_victory(com, me);
//        if (tmp == 0) {
//            printf("컴퓨터가 이겼습니다.\n");
//            computer++;
//        }
//        else if (tmp == 1) {
//            printf("사람이 이겼습니다.\n");
//            human++;
//        }
//        else if (tmp == 2) {
//            printf("비겼습니다.\n");
//            draw++;
//        }
//
//        //추가: 이번 판 결과를 파일에 기록
//        fprintf(aFile, "컴퓨터: %s, 사람: %s -> ",
//            hand_name[com], hand_name[me]);
//        if (tmp == 0)      fprintf(aFile, "컴퓨터 승\n\n");
//        else if (tmp == 1) fprintf(aFile, "사람 승\n\n");
//        else if (tmp == 2) fprintf(aFile, "비김\n\n");
//
//        printf("\n사람이 이긴 횟수 = %d\n", human);
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
//    //★★★ 게임 끝난 뒤: 파일을 다시 열어서 기록 보여주기 ★★★
//    aFile = fopen("srp_result.txt", "r");
//
//    printf("\n===== 이번 게임 기록 (파일에서 읽기) =====\n");
//    char line[128];
//    while (!feof(aFile)) {
//        fgets(line, sizeof(line), aFile);
//        printf("%s", line);
//    }
//    fclose(aFile);
//}


//심화_38p_문제2
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int compare_victory(int com, int me)
//{
//    if (com == 0)
//    {
//        printf("컴퓨터 : 가위\n\n");
//        if (me == 0) return 2;
//        else if (me == 1) return 1;
//        else if (me == 2) return 0;
//    }
//    else if (com == 1) {
//        printf("컴퓨터 : 바위\n\n");
//        if (me == 0) return 0;
//        else if (me == 1) return 2;
//        else if (me == 2) return 1;
//    }
//    else if (com == 2) {
//        printf("컴퓨터 : 보\n\n");
//        if (me == 0) return 1;
//        else if (me == 1) return 0;
//        else if (me == 2) return 2;
//    }
//}
//void get_hands(int* pCom, int* pMe)
//{
//    *pCom = rand() % 3;
//
//    while (1) {
//        printf("0:가위, 1:바위, 2:보\n당신이 낼 것은?: ");
//        int me;
//        scanf("%d", &me);
//
//        if (me == 0) {
//            printf("당신: 가위\n");
//            *pMe = me;
//            return;
//        }
//        else if (me == 1) {
//            printf("당신: 바위\n");
//            *pMe = me;
//            return;
//        }
//        else if (me == 2) {
//            printf("당신: 보\n");
//            *pMe = me;
//            return;
//        }
//        else {
//            printf("\n반칙! 다시 내 주세요.\n\n");
//        }
//    }
//}
//int main()
//{
//    int com = 0;
//    int me = 0;
//    char ask_finish = 0;
//    int human = 0, computer = 0, draw = 0;
//    int tmp = 0;
//
//    // 손 이름 배열 (파일 기록용)
//    const char* hand_name[] = { "가위", "바위", "보" };
//
//    //★추가: 파일 포인터
//    FILE* aFile = fopen("srp_result.txt", "w");
//
//    srand(time(NULL));
//
//    while (true) {
//
//        get_hands(&com, &me);
//
//        tmp = compare_victory(com, me);
//        if (tmp == 0) {
//            printf("컴퓨터가 이겼습니다.\n");
//            computer++;
//        }
//        else if (tmp == 1) {
//            printf("사람이 이겼습니다.\n");
//            human++;
//        }
//        else if (tmp == 2) {
//            printf("비겼습니다.\n");
//            draw++;
//        }
//
//        //추가: 이번 판 결과를 파일에 기록
//        fprintf(aFile, "컴퓨터: %s, 사람: %s -> ",
//            hand_name[com], hand_name[me]);
//        if (tmp == 0)      fprintf(aFile, "컴퓨터 승\n\n");
//        else if (tmp == 1) fprintf(aFile, "사람 승\n\n");
//        else if (tmp == 2) fprintf(aFile, "비김\n\n");
//
//        printf("\n사람이 이긴 횟수 = %d\n", human);
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
//    //★★★ 게임 끝난 뒤: 파일을 다시 열어서 기록 보여주기 ★★★
//    aFile = fopen("srp_result.txt", "r");
//
//    printf("\n===== 이번 게임 기록 (파일에서 읽기) =====\n");
//    char line[128];
//    while (!feof(aFile)) {
//        fgets(line, sizeof(line), aFile);
//        printf("%s", line);
//    }
//    fclose(aFile);
//    return 0;
//}


//심화_38p_문제3
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int compare_victory(int com, int me)
//{
//    // 컴퓨터가 무엇을 냈는지 출력
//    if (com == 0)      printf("컴퓨터 : 가위\n\n");
//    else if (com == 1) printf("컴퓨터 : 바위\n\n");
//    else               printf("컴퓨터 : 보\n\n");
//
//    if (com == me) return 2;
//    else if ((com + 1) % 3 == me) return 1;
//    else return 0;
//}
//void get_hands(int* pCom, int* pMe)
//{
//    *pCom = rand() % 3;
//
//    while (1) {
//        printf("0:가위, 1:바위, 2:보\n당신이 낼 것은?: ");
//        int me;
//        scanf("%d", &me);
//
//        if (me == 0) {
//            printf("당신: 가위\n");
//            *pMe = me;
//            return;
//        }
//        else if (me == 1) {
//            printf("당신: 바위\n");
//            *pMe = me;
//            return;
//        }
//        else if (me == 2) {
//            printf("당신: 보\n");
//            *pMe = me;
//            return;
//        }
//        else {
//            printf("\n반칙! 다시 내 주세요.\n\n");
//            continue;
//        }
//    }
//}
//int main()
//{
//    int com = 0;
//    int me = 0;
//    char ask_finish = 0;
//    int human = 0, computer = 0, draw = 0;
//    int tmp = 0;
//
//    const char* hand_name[] = { "가위", "바위", "보" };
//
//    FILE* aFile = fopen("srp_result.txt", "w");
//
//    srand(time(NULL));
//
//    while (true) {
//
//        get_hands(&com, &me);
//
//        tmp = compare_victory(com, me);
//        if (tmp == 0) {
//            printf("컴퓨터가 이겼습니다.\n");
//            computer++;
//        }
//        else if (tmp == 1) {
//            printf("사람이 이겼습니다.\n");
//            human++;
//        }
//        else if (tmp == 2) {
//            printf("비겼습니다.\n");
//            draw++;
//        }
//
//        fprintf(aFile, "컴퓨터: %s, 사람: %s -> ", hand_name[com], hand_name[me]);
//        if (tmp == 0)      fprintf(aFile, "컴퓨터 승\n\n");
//        else if (tmp == 1) fprintf(aFile, "사람 승\n\n");
//        else if (tmp == 2) fprintf(aFile, "비김\n\n");
//
//        printf("\n사람이 이긴 횟수 = %d\n", human);
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
//    aFile = fopen("srp_result.txt", "r");
//
//    printf("\n===== 이번 게임 기록 (파일에서 읽기) =====\n");
//    char line[128];
//    while (!feof(aFile)) {
//        fgets(line, sizeof(line), aFile);
//        printf("%s", line);
//    }
//    fclose(aFile);
//    return 0;
//}


//심화_38p_문제3_리팩토링1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int whowhat(const char* who, int what) {
//    const char* hand_name[] = { "가위", "바위", "보" };
//    printf("%s : %s \n", who, hand_name[what]);
//    return what;
//}
//
//int compare_victory(int com, int me)
//{
//    whowhat("컴퓨터", com);
//
//    if (com == me) return 2;
//    else if ((com + 1) % 3 == me) return 1;
//    else return 0;
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
//int main()
//{
//    int com = 0;
//    int me = 0;
//    char ask_finish = 0;
//    int human = 0, computer = 0, draw = 0;
//    int tmp = 0;
//
//    const char* hand_name[] = { "가위", "바위", "보" };
//
//    FILE* aFile = fopen("srp_result.txt", "w");
//
//    srand(time(NULL));
//
//    while (true) {
//
//        get_hands(&com, &me);
//
//        tmp = compare_victory(com, me);
//        if (tmp == 0) {
//            printf("컴퓨터가 이겼습니다.\n");
//            computer++;
//        }
//        else if (tmp == 1) {
//            printf("사람이 이겼습니다.\n");
//            human++;
//        }
//        else if (tmp == 2) {
//            printf("비겼습니다.\n");
//            draw++;
//        }
//
//        fprintf(aFile, "컴퓨터: %s, 사람: %s -> ", hand_name[com], hand_name[me]);
//        if (tmp == 0)      fprintf(aFile, "컴퓨터 승\n\n");
//        else if (tmp == 1) fprintf(aFile, "사람 승\n\n");
//        else if (tmp == 2) fprintf(aFile, "비김\n\n");
//
//        printf("\n사람이 이긴 횟수 = %d\n", human);
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


//심화_38p_문제3_리팩토링2
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//const char* hands_to_str(int what) {
//    static const char* hand_name[] = { "가위", "바위", "보" };
//    return hand_name[what];
//}
//int whowhat(const char* who, int what) {
//    printf("%s : %s \n", who, hands_to_str(what));
//    return what;
//}
//
//int compare_victory(int com, int me)
//{
//    whowhat("컴퓨터", com);
//
//    if (com == me) return 2;
//    else if ((com + 1) % 3 == me) return 1;
//    else return 0;
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
//int main()
//{
//    int com = 0;
//    int me = 0;
//    char ask_finish = 0;
//    int human = 0, computer = 0, draw = 0;
//    int tmp = 0;
//
//    FILE* aFile = fopen("srp_result.txt", "w");
//
//    srand(time(NULL));
//
//    while (true) {
//
//        get_hands(&com, &me);
//
//        tmp = compare_victory(com, me);
//        if (tmp == 0) {
//            printf("컴퓨터가 이겼습니다.\n");
//            computer++;
//        }
//        else if (tmp == 1) {
//            printf("당신이 이겼습니다.\n");
//            human++;
//        }
//        else if (tmp == 2) {
//            printf("비겼습니다.\n");
//            draw++;
//        }
//
//        fprintf(aFile, "당신: %s, 컴퓨터: %s -> ", hands_to_str(me), hands_to_str(com));
//        if (tmp == 0)      fprintf(aFile, "컴퓨터 승\n");
//        else if (tmp == 1) fprintf(aFile, "당신 승\n");
//        else               fprintf(aFile, "무승부\n");
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


//심화_38p_문제3_저장하고 이어하기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOSE 0
#define WIN 1
#define DRAW 2

const char* hands_to_str(int what) {
    static const char* hand_name[] = { "가위", "바위", "보" };
    return hand_name[what];
}
int whowhat(const char* who, int what) {
    printf("%s : %s \n", who, hands_to_str(what));
    return what;
}
int compare_victory(int com, int me)
{
    whowhat("컴퓨터", com);

    if (com == me) return DRAW;
    else if ((com + 1) % 3 == me) return WIN;
    else return LOSE;
}
void get_hands(int* pCom, int* pMe)
{
    *pCom = rand() % 3;

    while (1) {
        printf("0:가위, 1:바위, 2:보\n당신이 낼 것은?: ");
        int me;
        int ret = scanf("%d", &me);
        if (ret != 1) {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            printf("문자를 입력했습니다. 다시내주세요\n\n");
            continue;
        }
        if (me >= 0 && me <= 2) {
            whowhat("당신", me);
            *pMe = me;
            return;
        }
        else {
            printf("\n반칙! 다시 내 주세요.\n\n");
        }
    }
}
void load_score(int* human, int* computer, int* draw) {
    FILE* bFile = fopen("srp_state1.txt", "r");
    if (bFile != NULL) {
        fscanf(bFile, "%d %d %d", human, computer, draw);
        fclose(bFile);
    }
}
void save_score(int human, int computer, int draw) {
    FILE* bFile = fopen("srp_state1.txt", "w");
    fprintf(bFile, "%d %d %d\n", human, computer, draw);
    fclose(bFile);
}

int main()
{
    int com = 0;
    int me = 0;
    char ask_finish = 0;
    int human = 0, computer = 0, draw = 0;
    int tmp = 0;

    load_score(&human, &computer, &draw);
    printf("이전 게임 결과: 당신=%d, 컴퓨터=%d, 무승부=%d\n\n", human, computer, draw);

    srand(time(NULL));

    FILE* aFile = fopen("srp_result.txt", "a");
    fprintf(aFile, "\n시작 누적: 당신=%d, 컴퓨터=%d, 무승부=%d\n\n", human, computer, draw);

    while (true) {

        get_hands(&com, &me);

        tmp = compare_victory(com, me);
        if (tmp == LOSE) {
            printf("컴퓨터가 이겼습니다.\n");
            computer++;
        }
        else if (tmp == WIN) {
            printf("당신이 이겼습니다.\n");
            human++;
        }
        else if (tmp == DRAW) {
            printf("비겼습니다.\n");
            draw++;
        }

        fprintf(aFile, "\n당신: %s, 컴퓨터: %s -> ", hands_to_str(me), hands_to_str(com));
        if (tmp == LOSE)      fprintf(aFile, "컴퓨터 승\n");
        else if (tmp == WIN) fprintf(aFile, "당신 승\n");
        else               fprintf(aFile, "무승부\n");
        fprintf(aFile, "누적: 당신=%d, 컴퓨터=%d, 무승부=%d\n", human, computer, draw);

        printf("\n당신이 이긴 횟수 = %d\n", human);
        printf("컴퓨터가 이긴 횟수 = %d\n", computer);
        printf("동점 횟수 = %d\n", draw);

        printf("다시게임을 하시겠습니까?(y/n) : ");
        do {
            ask_finish = (char)getchar();
        } while (ask_finish == '\n');
        if (ask_finish == 'n')
            break;
        printf("\n");
    }
    fclose(aFile);

    save_score(human, computer, draw);

    aFile = fopen("srp_result.txt", "r");

    printf("\n===== 이번 게임 기록 (파일에서 읽기) =====\n");
    char line[256];
    if (aFile) {
        while (fgets(line, sizeof(line), aFile)) {
            printf("%s", line);
        }
        fclose(aFile);
    }
    return 0;
}