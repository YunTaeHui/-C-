//심화_26p_문제1-6
//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[100] = { };
//	int* ptr;
//
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	ptr = &arr[99];
//	for (i = 0; i < 100; i++)
//	{
//		printf("%3d ", *ptr);
//		ptr--;
//	}
//	return 0;
//}

//심화_26p_문제1-6
//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[100] = { };
//	int* ptr;
//
//	for (i = 99; i >= 0; i--)
//	{
//		arr[i] = i + 1;
//	}
//	ptr = &arr[99];
//	for (i = 99; i >= 0; i--)
//	{
//		printf("%3d ", *ptr);
//		ptr--;
//	}
//	return 0;
//}


//심화_26p_문제2
//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[100];
//	int* ptr;
//
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	ptr = &arr[50];
//
//	//while (*ptr != 50)
//	while (ptr != &arr[49])
//	{
//		printf("%3d ", *ptr);
//		ptr++;
//		if (ptr == &arr[100])
//		{
//			ptr = &arr[0];
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//struct mydata
//{
//	int a;
//	char b[25];
//};
//int main()
//{
//	char buf[6];
//	memset(buf, '1', 5);
//	buf[5] = '\0';
//	printf("%s\n", buf);
//
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'K';
//	printf("%d - %s\n", data.a, data.b);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char* str1 = (char*)"coding";
//	char* str2 = (char*)"coding";
//	char* str3 = (char*)"coding.ne.kr";
//	char* str4 = (char*)"ne.kr";
//	char* str5 = (char*)"abcd";
//
//	printf("%s with %s = %d\n", str1, str2,
//		memcmp(str1, str2, strlen(str1)));
//	printf("%s with %s (str1 size) = %d\n", str1, str5,
//		memcmp(str1, str5, strlen(str1)));
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int src_data[10] = { 0,1,2,3,4,5 };
//	int dst_data[10] = { 10,20,30,40,50 };
//	memcpy(dst_data, src_data, sizeof(int) * 2);
//
//	printf("%d %d %d %d %d\n", src_data[0], src_data[1], src_data[2], src_data[3], src_data[4]);
//	printf("%d %d %d %d %d\n", dst_data[0], dst_data[1], dst_data[2], dst_data[3], dst_data[4]);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[20] = "coding";
//	strcat(str, ".ne.kr");
//	printf("%s\n", str);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[10];
//	scanf("%s", str);
//	printf("입력한 문자열 : %s\n", str);
//	printf("문자열의 길이 : %d\n", strlen(str));
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a sample string";
//	char* pch;
//	printf("Looking for the 's' character in \"%s\"...\n", str);
//	pch = strchr(str, 's');
//
//	while (pch != NULL)
//	{
//		printf("found at %d\n", pch - str + 1);
//		pch = strchr(pch + 1, 's');
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//
//	pch = strstr(str, "simple");
//	strncpy(pch, "people", 6);
//
//	printf("%s\n", str);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* str1 = "LPUX";			//H L S
//	const char* str2 = "HINUX";
//	const char* str3 = "SOLARIS";
//
//	printf("s1[%-7s], s2[%-7s] =>ret = [%2d]\n", str1, str2, strcmp(str1, str2));	//양수
//	printf("s2[%-7s], s3[%-7s] =>ret = [%2d]\n", str2, str3, strcmp(str2, str3));	//음수
//	printf("s3[%-7s], s1[%-7s] =>ret = [%2d]\n", str3, str1, strcmp(str3, str1));	//양수
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buf[25];
//
//	strcpy(buf, "hello world");
//	printf("%s\n", buf);
//	strncpy(buf, "hello world", 5);
//	printf("%s\n", buf);
//
//	return 0;
//}


//심화_29p_문제1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buff[100];
//	char ch;
//	char* pch;
//
//	printf("문자열을 입력하세요.");
//	gets_s(buff, sizeof(buff));
//
//	while (1)
//	{
//		printf("검색할 문자를 입력하세요(0입력시 종료): ");
//		scanf(" %c", &ch);
//
//		if (ch == '0')
//		{
//			printf("프로그램을 종료합니다.");
//			break;
//		}
//		pch = strchr(buff, ch);
//		
//		if (pch == NULL)
//		{
//			printf("문자열에 '%c' 문자가 없습니다.\n", ch);
//		}
//		else
//		{
//			while (pch != NULL)
//			{
//				printf("'%c' 문자는 %d 번째에 있습니다.\n", ch, pch - buff + 1);
//				pch = strchr(pch + 1, ch);
//			}
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int parsing(char* string, int* data)
//{
//	char* p;
//	int cnt;
//	cnt = 0;
//
//	p = strtok(string, "_");
//	while (p) {
//		data[cnt++] = atoi(p);
//
//		p = strtok(NULL, "_");
//	}
//	return cnt;
//}
//
//int main() {
//	char string[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(string, data);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf("%d\n", data[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int integer = 123;
//	char character = 'c';
//	char string[] = "hello, world";
//	int* pointer = &integer;
//	double pi = 3.141592;
//	char buf[100];
//
//	sprintf(buf, "integer : (decimal) %d (octal) %o \n", integer, integer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "character : %c \n", character);
//	printf("%s \n", buf);
//
//	sprintf(buf, "string : %c \n", string);
//	printf("%s \n", buf);
//
//	sprintf(buf, "pointer addr : %p \n", pointer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "floating point : %e \\%f \n", pi, pi);
//	printf("%s \n", buf);
//
//	sprintf(buf, "percent symbol : %% \n");
//	printf("%s \n", buf);
//
//	return 0;
//}


//심화_30p_문제2
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//    char buff[100];     // 수식 문자열 저장
//    char* p;
//
//    int nums[3];        //실제 숫자를 저장할 공간 (a, b, c)
//    int* data[3];       //0: 첫 번째 수, 1: 연산자, 2: 두 번째 수, 3: '=', 4: 결과 수
//    int cnt = 0;
//    char op;
//
//    //포인터 배열 초기화: data[0] -> &nums[0], data[1] -> &nums[1], ...
//    for (int i = 0; i < 3; i++) {
//        data[i] = &nums[i];
//    }
//
//    printf("식 입력 (예: 3 - 1 = 2): ");
//    gets_s(buff, sizeof(buff));
//
//    //토큰 인덱스: 0: 피연산자1, 1: 연산자, 2: 피연산자2, 3: '=', 4: 결과
//    int index = 0;
//
//    //공백을 기준으로 문자열 자르기
//    p = strtok(buff, " ");
//    while (p != NULL) {
//        if (index == 0) {           //첫 번째 숫자
//            *data[0] = atoi(p);
//        }
//        else if (index == 1) {      //연산자
//            op = p[0];              //'+', '-', '*', '/' 중 하나
//        }
//        else if (index == 2) {      //두 번째 숫자
//            *data[1] = atoi(p);
//        }
//        else if (index == 4) {      //결과 숫자
//            *data[2] = atoi(p);
//        }
//        //index == 3 일 때는 '=' 이므로 그냥 무시
//        index++;
//        p = strtok(NULL, " ");
//    }
//
//    int a = *data[0];
//    int b = *data[1];
//    int c = *data[2];
//    int result = 0;
//
//    switch (op) {
//    case '+': result = a + b; break;
//    case '-': result = a - b; break;
//    case '*': result = a * b; break;
//    case '/':
//        if (b == 0) {
//            printf("0으로 나눌 수 없습니다.\n");
//            return 1;
//        }
//        result = a / b;
//        break;
//    default:
//        printf("지원하지 않는 연산자입니다.\n");
//        return 1;
//    }
//
//    if (result == c) {
//        printf("참입니다.\n");
//    }
//    else {
//        // 예: "1 + 2 는 3 입니다."
//        printf("%d %c %d 는 %d 입니다.\n", a, op, b, result);
//    }
//    return 0;
//}


//251127_목요일_숙제
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//char parsing(char* buff, int* data)
//{
//	char* p;
//	int index = 0;
//	char op = 0;
//
//	/*p = strtok(buff, " ");
//	while (p != NULL)
//	{
//		if (index == 0) {
//			data[0] = atoi(p);
//		}
//		else if (index == 1) {
//			op = p[0];
//		}
//		else if (index == 2) {
//			data[1] = atoi(p);
//		}
//		else if (index == 4) {
//			data[2] = atoi(p);
//		}
//		index++;
//		p = strtok(NULL, " ");
//	}*/
//
//	//하드 코딩
//	p = strtok(buff, " ");
//	data[0] = atoi(p);
//
//	p = strtok(NULL, " ");
//	op = p[0];
//
//	p = strtok(NULL, " ");
//	data[1] = atoi(p);
//
//	p = strtok(NULL, " ");
//
//	p = strtok(NULL, " ");
//	data[2] = atoi(p);
//
//	return op;
//}
//
//int main()
//{
//	char buff[100] = {};
//	int data[3];
//	int result = 0;
//
//	printf("식 입력(예: 3 - 1 = 2): ");
//	gets_s(buff, sizeof(buff));
//
//	char op = parsing(buff, data);
//
//	int a = data[0];
//	int b = data[1];
//	int c = data[2];
//
//	switch (op) {
//	case '+': result = a + b; break;
//	case '-': result = a - b; break;
//	case '*': result = a * b; break;
//	case '/':
//		if (b == 0)
//		{
//			printf("0으로 나눌 수 없습니다.\n");
//			return 1;
//		}
//		result = a / b; break;
//	default :
//		printf("지원하지 않는 연산자입니다.\n");
//		return 1;
//	}
//
//	if (result == c)
//	{
//		printf("참 입니다.\n");
//	}
//	else
//	{
//		printf("%d %c %d 는 %d 입니다.\n", a, op, b, result);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//struct GM {
//    int no;
//    char name[10];
//    int part;
//    int salary;
//};
//struct COMPANY {
//    GM gms[5];
//    int gmCount = 0;
//};
//
//void main()
//{
//    printf("게임을 출시해보자! \n");
//    COMPANY gameCo;
//
//    printf("먼저 GM부터 고용할까?\n");
//    while (1) {
//        gameCo = HireGM_once(gameCo);
//        printf("더 고용할까?(y/n) : ");
//        char ch;
//        do {
//            ch = getchar();
//        } while (ch != 'y' && ch != 'n');
//        if (ch == 'n') break;
//    }
//    printf("GM %d명을 뽑았다!\n", gameCo.gmCount);
//}


//심화_31p_문제3
//#include <stdio.h>
//struct GM {
//	int no;
//	char name[10];
//	int part;
//	int salary;
//};
//struct COMPANY {
//	GM gms[5];
//	int gmCount = 0;
//};
//struct COMPANY HireGM_once(COMPANY co)
//{
//	if (co.gmCount >= 5) {
//		printf("GM은 5명이 최대입니다.\n");
//		return co;
//	}
//	GM newGM;
//	printf("%d번째 GM 정보 입력\n", co.gmCount + 1);
//
//	printf("no: ");
//	scanf("%d", &newGM.no);
//
//	printf("name: ");
//	scanf("%9s", newGM.name);
//
//	printf("part: ");
//	scanf("%d", &newGM.part);
//
//	printf("salary: ");
//	scanf("%d", &newGM.salary);
//
//	co.gms[co.gmCount] = newGM;
//	co.gmCount++;
//
//	return co;
//}
//
//void main()
//{
//	printf("게임을 출시해보자! \n");
//	COMPANY gameCo;
//	gameCo.gmCount = 0;
//
//	printf("먼저 GM부터 고용할까?\n");
//	while (1) {
//		gameCo = HireGM_once(gameCo);
//		printf("더 고용할까?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n') break;
//	}
//	printf("GM %d명을 뽑았다!\n", gameCo.gmCount);
//}


//#include <stdio.h>
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//void main()
//{
//	const int N = 2;
//	SNACK snacks[N] = { { 1500,3,"레몬칩" }, { 1000,2,"달고나" } };
//	printf("<<과자자판기!>>\n");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d원 (%d개 남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//	int choice;
//	scanf("%d", &choice);
//	printf("%s가 나왔습니다.\n", snacks[choice - 1].name);
//}


//심화_문제_4-1
//#include <stdio.h>
//
//struct SNACK {
//    int price;
//    int stock;
//    char name[20];
//};
//
//int main(void)
//{
//    const int N = 5;  // 과자 5개
//    struct SNACK snacks[N] = {
//        { 1500, 3, "레몬칩" },
//        { 1000, 2, "달고나" },
//        { 1200, 5, "새우깡" },
//        { 1800, 4, "포테이토" },
//        { 2000, 1, "초코칩" }
//    };
//
//    printf("<< 과자 자판기! >>\n");
//    for (int i = 0; i < N; i++)
//    {
//        printf("%d.[%6s] %4d원 (%d개 남음)\n",
//            i + 1,
//            snacks[i].name,
//            snacks[i].price,
//            snacks[i].stock);
//    }
//
//    int choice;
//    printf("원하는 번호를 입력하세요: ");
//    scanf("%d", &choice);
//
//    if (choice < 1 || choice > N) {
//        printf("잘못된 선택입니다.\n");
//        return 0;
//    }
//
//    printf("%s이(가) 나왔습니다.\n", snacks[choice - 1].name);
//
//    return 0;
//}


//심화_문제_4-2
//#include <stdio.h>
//
//struct SNACK {
//    int price;      // 가격
//    int stock;      // 재고
//    char name[20];  // 이름
//};
//
//int main(void)
//{
//    const int N = 5;  // 과자 종류 수
//    struct SNACK snacks[N] = {
//        { 1500, 3, "레몬칩" },
//        { 1000, 2, "달고나" },
//        { 1200, 5, "새우깡" },
//        { 1800, 4, "포테이토" },
//        { 2000, 1, "초코칩" }
//    };
//
//    int money;
//
//    printf("<< 과자 자판기! >>\n");
//    printf("투입할 금액을 입력하세요: ");
//    scanf("%d", &money);
//
//    if (money <= 0) {
//        printf("금액이 부족합니다. 프로그램을 종료합니다.\n");
//        return 0;
//    }
//
//    // 가장 싼 과자 가격 구하기 (잔액으로 더 살 수 있는지 판단용)
//    int minPrice = snacks[0].price;
//    for (int i = 1; i < N; i++) {
//        if (snacks[i].price < minPrice) {
//            minPrice = snacks[i].price;
//        }
//    }
//
//    while (1) {
//        printf("\n현재 잔액: %d원\n", money);
//        printf("===== 메뉴 =====\n");
//        for (int i = 0; i < N; i++)
//        {
//            printf("%d.[%6s] %4d원 (%d개 남음)\n",
//                i + 1,
//                snacks[i].name,
//                snacks[i].price,
//                snacks[i].stock);
//        }
//        printf("0. 구매 종료\n");
//        printf("원하는 번호를 입력하세요: ");
//
//        int choice;
//        scanf("%d", &choice);
//
//        if (choice == 0) {
//            // 사용자가 직접 종료 선택
//            break;
//        }
//
//        if (choice < 1 || choice > N) {
//            printf("잘못된 선택입니다.\n");
//            continue;
//        }
//
//        int idx = choice - 1;  // 배열 인덱스
//
//        // 재고 확인
//        if (snacks[idx].stock <= 0) {
//            printf("%s은(는) 품절입니다.\n", snacks[idx].name);
//            continue;
//        }
//
//        // 잔액 확인
//        if (money < snacks[idx].price) {
//            printf("잔액이 부족합니다. %s을(를) 살 수 없습니다.\n", snacks[idx].name);
//            continue;
//        }
//
//        // 구매 처리
//        snacks[idx].stock--;
//        money -= snacks[idx].price;
//
//        printf("%s이(가) 나왔습니다!\n", snacks[idx].name);
//        printf("남은 잔액: %d원\n", money);
//
//        // 잔액으로 더 살 수 있는지 확인
//        if (money < minPrice) {
//            printf("잔액이 부족하여 더 이상 구매할 수 없습니다.\n");
//            break;
//        }
//    }
//
//    printf("\n구매를 종료합니다. 거스름돈: %d원\n", money);
//
//    return 0;
//}


//심화_문제_4-3
//#include <stdio.h>
//
//struct SNACK {
//    int price;      // 가격
//    int stock;      // 재고
//    char name[20];  // 이름
//};
//
//void print_change(int money)
//{
//    int unit[] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };
//    int n = sizeof(unit) / sizeof(unit[0]);
//
//    printf("거스름돈 반환:\n");
//
//    for (int i = 0; i < n; i++) {
//        int cnt = money / unit[i];
//        if (cnt > 0) {
//            printf("%5d원 : %d개\n", unit[i], cnt);
//            money %= unit[i];
//        }
//    }
//
//    if (money > 0) {
//        printf("10원 미만 잔액 %d원은 반환되지 않습니다.\n", money);
//    }
//}
//
//int main(void)
//{
//    const int N = 5;  // 과자 종류 수
//    struct SNACK snacks[N] = {
//        { 1500, 3, "레몬칩" },
//        { 1000, 2, "달고나" },
//        { 1200, 5, "새우깡" },
//        { 1800, 4, "포테이토" },
//        { 2000, 1, "초코칩" }
//    };
//
//    int money;
//
//    printf("<< 과자 자판기! >>\n");
//    printf("투입할 금액을 입력하세요: ");
//    scanf("%d", &money);
//
//    if (money <= 0) {
//        printf("금액이 부족합니다. 프로그램을 종료합니다.\n");
//        return 0;
//    }
//
//    // 가장 싼 과자 가격 구하기 (잔액으로 더 살 수 있는지 판단용)
//    int minPrice = snacks[0].price;
//    for (int i = 1; i < N; i++) {
//        if (snacks[i].price < minPrice) {
//            minPrice = snacks[i].price;
//        }
//    }
//
//    while (1) {
//        printf("\n현재 잔액: %d원\n", money);
//        printf("===== 메뉴 =====\n");
//        for (int i = 0; i < N; i++)
//        {
//            printf("%d.[%6s] %4d원 (%d개 남음)\n",
//                i + 1,
//                snacks[i].name,
//                snacks[i].price,
//                snacks[i].stock);
//        }
//        printf("0. 구매 종료\n");
//        printf("원하는 번호를 입력하세요: ");
//
//        int choice;
//        scanf("%d", &choice);
//
//        if (choice == 0) {   // 사용자가 직접 종료
//            break;
//        }
//
//        if (choice < 1 || choice > N) {
//            printf("잘못된 선택입니다.\n");
//            continue;
//        }
//
//        int idx = choice - 1;  // 배열 인덱스
//
//        // 재고 확인
//        if (snacks[idx].stock <= 0) {
//            printf("죄송합니다. %s은(는) 품절입니다.\n", snacks[idx].name);
//            continue;
//        }
//
//        // 잔액 확인
//        if (money < snacks[idx].price) {
//            printf("잔액이 부족합니다. %s을(를) 살 수 없습니다.\n", snacks[idx].name);
//            continue;
//        }
//
//        // 구매 처리
//        snacks[idx].stock--;
//        money -= snacks[idx].price;
//
//        printf("%s이(가) 나왔습니다!\n", snacks[idx].name);
//        printf("남은 잔액: %d원\n", money);
//
//        // 잔액으로 더 살 수 있는지 확인
//        if (money < minPrice) {
//            printf("잔액이 부족하여 더 이상 구매할 수 없습니다.\n");
//            break;
//        }
//    }
//
//    printf("\n구매를 종료합니다. 총 거스름돈: %d원\n", money);
//    print_change(money);   // 여기서 실제 거스름돈 반환 기능 호출
//
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* iptr = (int*)malloc(sizeof(int));
//	char* cptr = (char*)malloc(sizeof(char));
//	double* dptr = (double*)malloc(sizeof(double));
//	*iptr = 5;
//	*cptr = 'a';
//	*dptr = 3.5;
//	printf("%d, %c. %lf", *iptr, *cptr, *dptr);
//
//	free(iptr);
//	free(cptr);
//	free(dptr);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr_1[5];
//	int* arr_2;
//
//	for (int i = 0; i < 5; i++)
//	{
//		arr_1[i] = i + 1;
//	}
//	arr_2 = (int*)malloc(sizeof(int) * 5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		arr_2[i] = arr_1[i];
//		printf("%d,", arr_2[i]);
//	}
//	free(arr_2);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	aNum = (int**)malloc(nRow * sizeof(int*));
//	for (int i = 0; i < nRow; i++)
//	{
//		aNum[i] = (int*)malloc(nCol * sizeof(int));
//
//		for (int j = 0; j < nCol; ++j)
//		{
//			aNum[i][j] = i * 10 + j;
//		}
//	}
//	for (int i = 0; i < nRow; ++i)
//	{
//		for (int j = 0; j < nCol; ++j)
//		{
//			printf("%02d ", aNum[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < nRow; ++i)
//		free(aNum[i]);
//	free(aNum);
//
//	return 0;
//}


//심화_32p_문제1
//#include <stdio.h>
//
//int main()
//{
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	aNum = new int* [nRow];
//	//aNum = (int **)malloc(nRow * sizeof(int*));
//
//	for (int i = 0; i < nRow; i++) {
//		aNum[i] = new int[nCol];
//		//aNum[i] = (int*)malloc(nCol * sizeof(int));
//
//		for (int j = 0; j < nCol; j++) {
//			aNum[i][j] = i * 10 + j;
//		}
//	}
//	for (int i = 0; i < nRow; i++) {
//		for (int j = 0; j < nCol; j++) {
//			printf("%02d ", aNum[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < nRow; i++)
//		delete[] aNum[i];
//	//free(aNum[i]);
//	delete[] aNum;
//	//free(aNum);
//	return 0;
//}


//심화_32p_문제2_new/delete
//#include <stdio.h>
//#include <stdlib.h>   // rand, srand
//#include <time.h>     // time
//
//int main()
//{
//	int n = 10;
//	int* arr;
//
//	// 1) 동적 할당: int 10개짜리 배열
//	arr = new int[n];
//
//	// 2) 랜덤 시드 설정 (현재 시간 기준)
//	srand((unsigned int)time(NULL));
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 10 + 1;  // 0~9 → 1~10
//	}
//	printf("랜덤 배열 내용: ");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	// 5) 동적 메모리 해제
//	delete[] arr;
//
//	return 0;
//}


//심화_32p_문제2_malloc/free
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int n = 10;
//	int* arr;
//
//	arr = (int*)malloc(n * sizeof(int));
//	//arr = new int[n];
//
//	srand((unsigned int)time(NULL));
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 10 + 1;
//	}
//	printf("랜덤 배열 내용: \n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	free(arr);
//	//delete[] arr;
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void func_sort(int* pNum, int N);
//void func_swap(int& a, int& b);
//
//int main()
//{
//	int N, * pNum;
//	scanf("%d", &N);
//	pNum = (int*)malloc(sizeof(int) * N);
//
//	srand((unsigned int)time(NULL));
//
//	printf("랜덤으로 입력받은 수 출력\n");
//	for (int i = 0; i < N; i++) {
//		*(pNum + i) = (rand() % N) + 1;
//		printf("%2d ", pNum[i]);
//	}
//
//	func_sort(pNum, N);
//
//	printf("\n오름차순 정렬된 수 출력\n");
//	for (int i = 0; i < N; i++) {
//		printf("%2d ", pNum[i]);
//		if (i % 10 == 9) printf("\n");
//	}
//	free(pNum);
//}
//
//void func_sort(int* pNum, int N)
//{
//	for (int i = 0; i < N; ++i) {
//		for (int j = i; j < N; ++j) {
//			if (pNum[i] > pNum[j])
//				func_swap(pNum[i], pNum[j]);
//		}
//	}
//}
//void func_swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}


//심화_33p_문제1
//#include <stdio.h>          //표준 입출력 함수(printf, scanf) 헤더
//#include <stdlib.h>         //동적 메모리 할당(malloc, free)과 rand, srand 헤더
//#include <time.h>           //랜덤 설정용 - 시간 함수
//
//void func_sort(int* pNum, int N);   //정렬 함수 사전 선언: int 배열 포인터, 배열의 크기 N을 인자로 받음.
//void func_swap(int& a, int& b);     //교환 함수 사전 선언: 두 정수를 인자로 받음.
//
//int main()                          //main 함수 정의.
//{
//    int N, * pNum;                  //N: 배열의 크기, pNum: 동적 할당된 int 배열을 가리킬 포인터 변수 선언.
//    printf("배열 크기를 입력하세요: ");
//    scanf("%d", &N);                //배열의 크기 N을 입력받음.
//
//    pNum = (int*)malloc(sizeof(int) * N); //동적메모리에 int N개를 저장할 수 있는 크기만큼 할당받고, 시작 주소를 pNum에 저장.
//
//    srand((unsigned int)time(NULL)); //현재 시간을 기준으로 매 실행마다 다른 난수가 나오도록 설정.
//
//    printf("랜덤으로 입력받은 수 출력\n");
//
//    for (int i = 0; i < N; i++) {
//        *(pNum + i) = (rand() % N) + 1;     //pNum[i] 위치에 +1 해서 1~N 범위의 난수를 저장
//        printf("%2d ", pNum[i]);            //저장한 값 출력
//    }
//
//    func_sort(pNum, N);             //정렬 함수 호출: pNum이 가리키는 배열을 오름차순으로 정렬
//
//    printf("\n오름차순 정렬된 수 출력\n");
//
//    for (int i = 0; i < N; i++) {
//        printf("%2d ", pNum[i]);        //저장한 값 출력
//        if (i % 10 == 9) printf("\n");  //i가 9이면 줄바꿈
//    }
//    free(pNum);                     //동적 메모리를 해제(메모리 누수 방지)
//
//    return 0;                       //프로그램을 정상 종료
//}
//
//// 함수 선언부
//void func_sort(int* pNum, int N)    //pNum: 정렬할 int 배열의 시작 주소, N: 배열 크기
//{
//    for (int i = 0; i < N; i++) {   //배열의 처음부터 끝까지 한 번씩 훑는다 (총 N번)
//        for (int j = i; j < N; j++) //i 위치 이후의 요소들(j = i ~ N-1)과 비교
//        {
//            if (pNum[i] > pNum[j])              //i번째 원소가 j번째 원소보다 크면
//                func_swap(pNum[i], pNum[j]);    //두 값을 교환하여 작은 값이 앞쪽(i)에 오도록 함
//        }
//    }
//}
//
//void func_swap(int& a, int& b)      //두 정수 a, b를 레퍼런스로 받아 실제 변수 값을 교환하는 함수
//{
//    int temp = a;                   //temp를 거쳐서 a와 b 값을 서로 바꿈
//    a = b;
//    b = temp;
//}


//심화_33p_문제2
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void func_swap(int& a, int& b)		//변수 스왑 함수
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void func_sort(int* pNum, int N)	//선택 정렬 함수
//{
//	for (int i = 0; i < N; i++) {
//		for (int j = i; j < N; j++) {
//			if (pNum[i] > pNum[j]) {
//				func_swap(pNum[i], pNum[j]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int N, * pNum;
//	printf("배열 크기를 입력하세요: ");
//	scanf("%d", &N);
//	pNum = (int*)malloc(sizeof(int) * N);	//받아온 수만큼 동적할당하여 크기를 잡는다.
//
//	srand((unsigned int)time(NULL));		//rand 함수를 섞어준다.
//
//	printf("랜덤으로 입력받은 수 출력\n");
//	for (int i = 0; i < N; i++) {
//		*(pNum + i) = (rand() % N) + 1;
//		printf("%2d ", pNum[i]);
//	}
//
//	func_sort(pNum, N);	//선택 정렬 함수
//
//	printf("\n오름차순 정렬된 수 출력\n");
//	for (int i = 0; i < N; i++) {
//		printf("%2d ", pNum[i]);
//		if (i % 10 == 9) printf("\n");
//	}
//	free(pNum);
//}


//심화_33p_문제3
//IntArray struct를 만들어서 변수를 한곳에서 관리.
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//struct IntArray {
//	int* data;		//동적 할당된 int 배열
//	int size;		//배열 크기
//};
//void func_swap(int& a, int& b)		//변수 스왑 함수
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void func_sort(IntArray& arr)
//{
//	for (int i = 0; i < arr.size; i++) {
//		for (int j = i; j < arr.size; j++) {
//			if (arr.data[i] > arr.data[j]) {
//				func_swap(arr.data[i], arr.data[j]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	IntArray arr;
//	printf("배열 크기를 입력하세요: ");
//	scanf("%d", &arr.size);
//	arr.data = (int*)malloc(sizeof(int) * arr.size);
//
//	srand((unsigned int)time(NULL));		//rand 함수를 섞어준다.
//
//	printf("랜덤으로 입력받은 수 출력\n");
//	for (int i = 0; i < arr.size; i++) {
//		arr.data[i] = (rand() % arr.size) + 1;  // 1 ~ size 범위
//		printf("%2d ", arr.data[i]);
//	}
//	func_sort(arr);
//
//	printf("\n오름차순 정렬된 수 출력\n");
//	for (int i = 0; i < arr.size; i++) {
//		printf("%2d ", arr.data[i]);
//		if (i % 10 == 9) printf("\n");
//	}
//	free(arr.data);   // 동적 메모리 해제
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("안녕하세요");
//	fclose(pFile);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "안녕하세요");
//	fclose(pFile);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	char name[100];
//
//	pFile = fopen("myfile.txt", "r");
//	fscanf(pFile, "%s", name);
//	printf("%s", name);
//
//	fclose(pFile);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	char name[100];
//	pFile = fopen("myfile.txt", "w");
//	for (int n = 0; n < 5; ++n)
//	{
//		printf("파일에 쓰고 싶은 말을 입력하세요: \n");
//		scanf("%s", name);
//		fprintf(pFile, "%d번째 내용 [% - 10s]\n", n, name);
//	}
//	fclose(pFile);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	FILE* readfp, * writefp;
//	char buff[1024];
//
//	readfp = fopen("myfile.txt", "r");
//	writefp = fopen("outfile.txt", "w");
//	if (readfp == NULL) {
//		printf("파일을 찾지 못하였습니다.\n");
//		return 1;
//	}
//	/*while (!feof(readfp)) {
//		fgets(buff, 1024, readfp);
//		fputs(buff, writefp);
//	}*/
//	while (fgets(buff, sizeof(buff), readfp) != NULL) {
//		fputs(buff, writefp);
//	}
//	fclose(readfp);
//	fclose(writefp);
//
//	return 0;
//}


