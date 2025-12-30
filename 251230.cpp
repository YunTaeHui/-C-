//문제1-1
//1부터 100까지 수를 1부터 10개씩 10줄로 출력하되,
//각 숫자당 3자리로 줄맞춰 출력하세요.
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i++) {
//		printf("%3d ", i);
//		if (i % 10 == 0) {
//			printf("\n");
//		}
//	}
//	return 0;
//}

//문제1-2
//1부터 100까지 수를 1부터 10개씩 10줄로 출력하되,
//각 숫자당 3자리로 줄맞춰 출력하세요.(배열 사용)
//#include <stdio.h>
//int main()
//{
//	int a[100];
//	for (int i = 0; i < 100; i++) {
//		a[i] = i + 1;
//	}
//	for (int i = 0; i < 100; i++) {
//		printf("%3d ", a[i]);
//		if ((i + 1) % 10 == 0) {
//			printf("\n");
//		}
//	}
//	return 0;
//}

//문제1-3
//1부터 100까지 수를 1부터 10개씩 10줄로 출력하되,
//각 숫자당 3자리로 줄맞춰 출력하세요.(포인터 사용)
//#include <stdio.h>
//int main()
//{
//	int a[100];
//	int* p = a;
//	for (int i = 0; i < 100; i++) {
//		*p = i + 1;
//		p++;
//	}
//	p = a;
//	for (int i = 0; i < 100; i++) {
//		printf("%3d ", *p);
//		if ((i + 1) % 10 == 0) {
//			printf("\n");
//		}
//		p++;
//	}
//	return 0;
//}


//문제2
//0~100 사이의 점수를 입력받아 switch사용하여 A+(100), A(90이상), B(80이상), C(70이상), D(60이상), F(60미만)을 출력하세요.
//#include <stdio.h>
//int main()
//{
//	while (1) {
//		printf("0~100 사이의 점수를 입력하세요.(종료: -1)\n");
//		int score;
//		int ret = scanf("%d", &score);
//        if (ret != 1) {
//            int ch;
//            while ((ch = getchar()) != '\n' && ch != EOF) {}
//            printf("문자를 입력했습니다. 다시 입력해주세요.\n\n");
//            continue;
//        }
//        if (score == -1) {
//            printf("프로그램을 종료합니다.\n");
//            break;
//        }
//        if (score < 0 || score >100) {
//            printf("범위를 벗어났습니다. 다시 입력해주세요.\n\n");
//            continue;
//        }
//        switch (score / 10) {
//        case 10: printf("A+"); break;
//        case 9: printf("A"); break;
//        case 8: printf("B"); break;
//        case 7: printf("C"); break;
//        case 6: printf("D"); break;
//        default: printf("F"); break;
//        }
//        printf("\n");
//	}
//    return 0;
//}


//문제3-1
//n을 입력받아 1부터 n까지의 합을 구하는 프로그램을 작성하세요.(반복문)
//#include <stdio.h>
//int main()
//{
//	printf("합을 구할 최댓값을 입력하세요.\n");
//	int num, hap = 0;
//	scanf("%d", &num);
//
//	for (int i = 0; i <= num; i++) {
//		hap += i;
//	}
//	printf("1부터 n까지의 합은 %d입니다.\n", hap);
//
//	return 0;
//}


//문제3-2
//n을 입력받아 1부터 n까지의 합을 구하는 프로그램을 작성하세요.(재귀호출)
//#include <stdio.h>
//
//int sum_to_n(int n)
//{
//	if (n < 0) return 0;
//	return n + sum_to_n(n - 1);	//10 + sum_to_n(9) → 9 + sum_to_n(8) ... 0 + sum_to_n(-1) → return 0
//}
//int main()
//{
//	printf("합을 구할 최댓값을 입력하세요.\n");
//
//	int num;
//	scanf("%d", &num);
//
//	int hap = sum_to_n(num);
//	printf("1부터 n까지의 합은 %d 입니다.\n", hap);
//
//	return 0;
//}


//문제4-1
//두 수 x, y를 입력받아 최대 공약수를 구하는 프로그램을 작성하세요.(반복문)
//#include <stdio.h>
//int main()
//{
//	int x, y;
//	printf("두 수 입력: ");
//	scanf("%d %d", &x, &y);
//
//	int min;
//	if (x < y) min = x;
//	else min = y;
//
//	int gcd = 1;
//	for (int i = min; i >= 1; i--) {
//		if (x % i == 0 && y % i == 0) {
//			gcd = i;
//			break;
//		}
//	}
//	printf("최대공약수 = %d\n", gcd);
//	return 0;
//}


//문제4-2
//두 수 x, y를 입력받아 최대 공약수를 구하는 프로그램을 작성하세요.(재귀호출)
//#include <stdio.h>
//int find_gcd(int x, int y, int i)
//{
//	if (i == 1) return 1;
//	
//	if (x % i == 0 && y % i == 0) {
//		return i;
//	}
//	return find_gcd(x, y, i - 1);
//}
//int main()
//{
//	int x, y;
//	printf("두 수 입력: ");
//	scanf("%d %d", &x, &y);
//
//	int min;
//	if (x < y) min = x;
//	else min = y;
//
//	int gcd = find_gcd(x, y, min);
//
//	printf("최대공약수 = %d\n", gcd);
//	return 0;
//}


//문제5
//n을 입력받아 n의 약수를 구하는 프로그램을 작성하세요.(반복문)
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("숫자를 입력하세요: ");
//	scanf("%d", &n);
//
//	if (n == 0) {
//		printf("0은 약수가 없습니다.\n");
//		return 0;
//	}
//	printf("%d의 약수: ", n);
//	for (int i = 1; i <= n; i++) {
//		if (n % i == 0) {
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}


//문제6
//컴퓨터와 나의 가위바위보 게임 프로그램을 작성하세요.
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//const char* hand_to_str(int hand) {
//	static const char* names[] = { "가위", "바위", "보" };
//	return names[hand];
//}
////0:컴퓨터 승, 1:플레이어 승, 2:무승부
//int judge(int me, int com) {
//	if (me == com) return 2;
//	if ((me + 1) % 3 == com) return 0;
//	return 1;
//}
////시작할 때 파일에서 전적 불러오기
//int load_score(int* win, int* lose, int* draw) {
//	FILE* aFile = fopen("srp_result.txt", "r");
//	if (!aFile) return 0;
//	if (fscanf(aFile, "%d %d %d", win, lose, draw) != 3) {
//		fclose(aFile);
//		return 0;
//	}
//	fclose(aFile);
//	return 1;
//}
////종료할 때 파일에 전적 저장하기
//int save_score(int win, int lose, int draw) {
//	FILE* aFile = fopen("srp_result.txt", "w");
//	if (!aFile) return 0;
//	fprintf(aFile, "%d %d %d\n", win, lose, draw);
//	fclose(aFile);
//	return 1;
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//
//	int win = 0, lose = 0, draw = 0;
//
//	if (load_score(&win, &lose, &draw)) {
//		printf("저장된 전적: (승:%d, 패:%d, 무:%d)\n", win, lose, draw);
//	}
//	else {
//		printf("저장된 전적이 없어서 새로 시작합니다.\n");
//	}
//
//	while (1) {
//		int me;
//		int com = rand() % 3;
//
//		printf("\n가위바위보! (0:가위, 1:바위, 2:보, -1:종료) > ");
//
//		if (scanf("%d", &me) != 1) {
//			int ch;
//			while ((ch = getchar()) != '\n' && ch != EOF) {}
//			printf("숫자로 입력하세요.\n");
//			continue;
//		}
//		if (me == -1) break;
//
//		if (me < 0 || me > 2) {
//			printf("0~2 또는 -1만 입력 가능합니다.\n");
//			continue;
//		}
//		printf("나: %s\n", hand_to_str(me));
//		printf("컴퓨터: %s\n", hand_to_str(com));
//
//		int result = judge(me, com);
//		if (result == 1) {
//			printf("플레이어 승리!\n");
//			win++;
//		}
//		else if (result == 0) {
//			printf("컴퓨터 승리!\n");
//			lose++;
//		}
//		else {
//			printf("무승부!\n");
//			draw++;
//		}
//		printf("현재 전적 => 승:%d, 패:%d, 무:%d\n", win, lose, draw);
//	}
//	if (save_score(win, lose, draw)) {
//		printf("\n게임 종료! 전적 '%s'에 저장 완료.\n", "srp_result.txt");
//	}
//	else {
//		printf("\n게임 종료! (저장 실패)\n");
//	}
//	printf("\n게임 종료!\n최종 전적 => 승:%d, 패:%d, 무:%d\n", win, lose, draw);
//	return 0;
//}


//문제7
//숫자 n까지 3, 6, 9게임을 만들어 보세요.
//#include <stdio.h>
//int count_369(int x) {
//	int cnt = 0;
//	while (x > 0) {
//		int d = x % 10;
//		if (d == 3 || d == 6 || d == 9) {
//			cnt++;
//		}
//		x /= 10;
//	}
//	return cnt;
//}
//int main()
//{
//	int n;
//	printf("최대 값 n을 입력해주세요.\n");
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		int num = count_369(i);
//		if (num==0) {
//			printf("%d", i);
//		}
//		else {
//			for (int k = 0; k < num; k++) {
//				printf("짝");
//			}
//		}
//
//		if (i % 20 == 0) {
//			printf("\n");
//		}
//		else {
//			printf(" ");
//		}
//	}
//	printf("\n");
//	return 0;
//}


//문제8
//선택정렬, 버블정렬 함수를 만들어 보세요.
//#include <stdio.h>
//void print_arr(const int a[], int n) {
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void swap_int(int* a, int* b) {
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
////선택정렬: i번째 자리에 들어갈 "최소값"을 찾아서 swap
//void selection_sort(int a[], int n) {
//	for (int i = 0; i < n - 1; i++) {		//몇 번째 바퀴인지, 한바퀴 돌때마다 다음 인덱스
//		int min_idx = i;					//현재 i 위치가 최소 라고 가정하고 시작
//		for (int j = i + 1; j < n; j++) {	//j는 i다음칸부터 확인하면서
//			if (a[j] < a[min_idx]) {		//더 작은 값을 발견하면
//				min_idx = j;				//더 작은값을 min_idx로 입력
//			}
//		}
//		if (min_idx != i) {					//최소값이 i자리에 있으면 swap 안함
//			swap_int(&a[i], &a[min_idx]);	//아니면 a[i]와 a[min_idx] 값을 바꿈
//		}
//	}
//}
////버블정렬: 인접한 두 값을 비교해서 큰 값을 뒤로 밀어냄
//void bubble_sort(int a[], int n) {
//	for (int i = 0; i < n - 1; i++) {		//몇 번째 바퀴인지, 한바퀴 돌때마다 다음 인덱스
//		int swapped = 0;					//swap이 발생했는지 표시하는 변수
//		for (int j = 0; j < n - 1 - i; j++) {	//i 번째 바퀴가 끝나면 맨뒤는 이미 확정이라 -i
//			if (a[j] > a[j + 1]) {			//인접한 두 값 a[j], a[j+1] 비교
//				swap_int(&a[j], &a[j + 1]);	//왼쪽이 더 크면 값을 교환
//				swapped = 1;
//			}
//		}
//		if (!swapped) break;		//j를 돌때 swap이 한번도 발생 안했으면 반복문 탈출
//	}
//}
//
//int main() {
//	int a1[] = { 5,2,9,1,3 };
//	int a2[] = { 5,2,9,1,3 };
//	int n = (int)(sizeof(a1) / sizeof(a1[0]));
//
//	printf("원본: ");
//	print_arr(a1, n);
//
//	selection_sort(a1, n);
//	printf("선택정렬: ");
//	print_arr(a1, n);
//
//	bubble_sort(a2, n);
//	printf("버블정렬: ");
//	print_arr(a2, n);
//
//	return 0;
//}


//문제9-1
//n번째의 피보나치수열 만들어 보세요.(반복문)
//앞의 두 수를 더해서 다음 수를 만드는 규칙
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, …
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("n 입력(1부터): ");
//	scanf("%d", &n);
//
//	if (n == 1 || n == 2) {
//		printf("%d번째 피보나치 수 = 1\n", n);
//		return 0;
//	}
//
//	int a = 1, b = 1;
//	int c = 0;
//
//	for (int i = 3; i <= n; i++) {
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("%d번째 피보나치 수 = %d\n", n, b);
//	return 0;
//}


//문제9-2
//n번째의 피보나치수열 만들어 보세요.(재귀호출)
//#include <stdio.h>
//int fib(int n) {
//	if (n < 0) return -1;
//	else if (n == 0) return 0;
//	else if (n == 1) return 1;
//	return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n;
//	printf("n 입력: ");
//	scanf("%d", &n);
//	
//	int ans = fib(n);
//	if (ans < 0) {
//		printf("n은 0 이상이어야 합니다.\n");
//		return 0;
//	}
//	printf("F(%d) = %d\n", n, ans);
//	return 0;
//}


//문제10
//n을 입력받아 다이아몬드 별찍기 구현하기
//#include <stdio.h>
//int main()
//{
//	int x = 1;
//	int y = 2;
//	int line = 3;
//	printf("원하는 줄 수를 입력하세요 ");
//	scanf("%d", &line);
//	int digit = line - 1;
//
//	for (y = digit; y >= 0; y--, x += 2)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	x -= 2;
//	for (y = 0; y <= digit; y++, x -= 2)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//문제11-1
//이중 포인터를 이용하여 가로10개, 세로10개인 2차원 동적배열을 만드는 방법을 구현하세요.
//(malloc, free 사용)
//#include <stdio.h>
//#include <stdlib.h>
//
//int** alloc_2d() {
//	int rows = 10, cols = 10;
//
//	int** a = (int**)malloc(rows * sizeof(int*));
//
//	for (int i = 0; i < rows; i++) {
//		a[i] = (int*)malloc(cols * sizeof(int));
//	}
//	return a;
//}
//void free_2d(int** a) {
//	for (int i = 0; i < 10; i++) {
//		free(a[i]);
//	}
//	free(a);
//}
//int main() {
//	int** a = alloc_2d();
//
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			a[i][j] = i * 10 + j;
//		}
//	}
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			printf("%3d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	free_2d(a);
//	return 0;
//}


//문제11-2
//이중 포인터를 이용하여 가로10개, 세로10개인 2차원 동적배열을 만드는 방법을 구현하세요.
//(new, delete 사용)
//#include <stdio.h>
//#include <stdlib.h>
//
//int** alloc_2d() {
//	int rows = 10, cols = 10;
//
//	int** a = new int*[rows];
//
//	for (int i = 0; i < rows; i++) {
//		a[i] = new int[cols];
//	}
//	return a;
//}
//void free_2d(int** a) {
//	for (int i = 0; i < 10; i++) {
//		delete[] a[i];
//	}
//	delete[] a;
//}
//int main() {
//	int** a = alloc_2d();
//
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			a[i][j] = i * 10 + j;
//		}
//	}
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			printf("%3d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	free_2d(a);
//	return 0;
//}


//문제12
//숫자문자열을 입력받아 숫자로 바꾸는 프로그램을 구현하세요.
//#include <stdio.h>
//int str_to_int(const char* s, int* out) {
//	int i = 0;
//	int value = 0;
//
//	for (; s[i] != '\0'; i++) {
//		if (s[i] < '0' || s[i]>'9') {
//			return 0;
//		}
//		value = value * 10 + (s[i] - '0');
//	}
//	*out = value;
//	return 1;
//}
//
//int main()
//{
//	char s[100];
//	int n;
//	
//	printf("숫자문자열 입력: ");
//	scanf("%s", s);
//
//	if (str_to_int(s, &n)) {
//		printf("변환 결과: %d\n", n);
//	}
//	else {
//		printf("변환 실패: 숫자 문자열이 아닙니다.\n");
//	}
//	return 0;
//}


//13번 replace함수(x문자열 y문자열로 바꾼다), 특정문자열을 뒤로 이동시키고 그 위치에 입력하는 함수
//#include <stdio.h>
//#include <string.h>
//void replace(char* p, const char* x, const char* y)
//{
//	int xlen = strlen(x);
//	int ylen = strlen(y);
//	char* q = strstr(p, x);
//	if (q == NULL) return;
//	memmove(q + ylen, q + xlen, strlen(q + xlen) + 1);
//	memcpy(q, y, ylen);
//}


//문제13
//"I like apple, and you?" 구문에서 "apple"를 "watermelon"으로 바꾸려고 하는것처럼
//어떤 문자열에서 특정단어를 다른단어로 바꾸는 함수를 만들어보세요.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//static int count_occ(const char* s, const char* from) {	//apple 등장횟수를 구하는 함수
//	int count = 0;
//	int from_len = (int)strlen(from);	//인자 apple 길이
//
//	const char* p = s;
//	while (1) {
//		const char* hit = strstr(p, from);	//문자열이 처음으로 등장하는 위치를 찾아준다.
//		if (hit == 0) {			//더 이상 못찾으면 반복 종료
//			break;
//		}
//		count++;				//한 번 찾았으니 카운트 증가
//		p = hit + from_len;		//apple 바로 뒤를 가리킴
//	}
//	return count;
//}
//char* replace_substr_int(const char* src, const char* from, const char* to) {
//	//apple 대신 watermelon 을 적는 함수
//	int src_len = (int)strlen(src);		//인자 문자열의 길이
//	int from_len = (int)strlen(from);	//인자 apple 길이
//	int to_len = (int)strlen(to);		//인자 watermelon 길이
//
//	int cnt = count_occ(src, from);		//apple 등장횟수를 입력받는다
//
//	int new_len = src_len + cnt * (to_len - from_len); //바뀌는 글자에 대해 길이 측정
//	char* out = (char*)malloc(new_len + 1);		//새로 만들어질 동적메모리 할당
//
//	const char* p = src;	//src를 읽어갈 읽기용 이동 포인터
//	int w = 0;				//out에 써 넣을 현재 인덱스
//
//	while (p[0] != '\0') {
//		const char* hit = strstr(p, from);	//p 위치부터 apple 이 나오는 위치를 찾음.
//		if (hit == 0) {				//더 이상 apple 이 없으면
//			while (*p) {			//나머지 통째로 복사하고 종료.
//				out[w++] = *p++;	//p가 가리키는 문자를 읽고 다음 문자 위치로 1칸 이동
//			}
//			break;
//		}
//		while (p < hit) {		//hit 전까지 그대로 복사
//			out[w++] = *p++;	//apple 나오기 전 문장을 그대로 옮기는 과정.
//		}
//		for (int i = 0; i < to_len; i++) {
//			out[w++] = to[i];	//치환 대상 apple을 out에 쓰지 않고, 대신 watermelon을 out에 써 넣음.
//		}
//		p += from_len;			//원본 p는 from 길이만큼 건너뜀(= apple을 스킵)
//	}
//	out[w] = '\0';		//문자열 끝 표시하고 반환
//	return out;
//}
//int main()
//{
//	const char* s = "I like apple, and you? apple!";
//	char* r = replace_substr_int(s, "apple", "watermelon");
//	if (r == 0) {
//		printf("치환 실패\n");
//		return 1;
//	}
//	printf("원본: %s\n", s);
//	printf("결과: %s\n", r);
//
//	free(r);
//	return 0;
//}



//문제14
//두 수 x, y를 입력받아 x부터 y까지의 제곱수를 구하라.
//10~20사이의 제곱수 = 16->4, (math.h)의 제곱근(double sqrt)을 활용.
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int x, y;
//	printf("두 수 x, y를 입력하세요: ");
//	scanf("%d %d", &x, &y);
//
//	if (x > y) {
//		int tmp = x;
//		x = y;
//		y = tmp;
//	}
//	printf("%d와 %d사이의 제곱수는\n", x, y);
//	for (int i = sqrt(x); i <= sqrt(y); i++) {
//		printf("%d\n", i * i);
//	}
//	return 0;
//}


//문제15
//10진수를 n진수(2진수 또는 16진수)로 변환하는 프로그램을 구현하세요.
//#include <stdio.h>
//#include <stdlib.h>
//void print_in_base(int value, int base) {
//	const char digits[] = "0123456789ABCDEF";
//	if (value == 0) {
//		putchar('0');
//		return;
//	}
//	int u;
//	if (value < 0) {
//		putchar('-');
//		u = abs(value);
//	}
//	else {
//		u = value;
//	}
//	char buf[70];
//	int top = 0;
//	while (u > 0) {
//		buf[top++] = digits[u % base];
//		u /= base;
//	}
//	for (int i = top - 1; i >= 0; --i) {
//		putchar(buf[i]);
//		int rem = i;
//		if (rem > 0 && rem % 4 == 0) {
//			putchar(' ');
//		}
//	}
//}
//int main() {
//	int dec;
//	int base;
//
//	printf("10진수 입력: ");
//	scanf("%d", &dec);
//	printf("변환할 진수 선택 (2 또는 16): ");
//	scanf("%d", &base);
//
//	if (base != 2 && base != 16) {
//		printf("오류: 2 또는 16만 가능합니다.\n");
//		return 0;
//	}
//	printf("결과(%d진수): ", base);
//	print_in_base(dec, base);
//	putchar('\n');
//	return 0;
//}


//문제16
//C:\temp\a.txt를 같은폴더의 b.txt에 복사함에 있어 소문자가 있다면 모두 대문자로 바꿔서 복사하세요.
//#include <stdio.h>
//#include <string.h>
//char* to_upper(char* inStr) {
//	int diff = 'a' - 'A';
//	int len = strlen(inStr);
//
//	for (int i = 0; i < len; i++) {
//		if (inStr[i] >= 'a' && inStr[i] <= 'z') {
//			inStr[i] = inStr[i] - diff;
//		}
//	}
//	return inStr;
//}
//
//int main()
//{
//	FILE* aFile = fopen("C:\\Temp\\a.txt", "r");
//	if (!aFile) {
//		printf("a.txt 열기 실패");
//		return 1;
//	}
//	FILE* bFile = fopen("C:\\Temp\\b.txt", "w");
//	if (!bFile) {
//		printf("b.txt 열기 실패");
//		fclose(aFile);
//		return 1;
//	}
//	char line[256];
//	while (fgets(line, sizeof(line), aFile) != NULL) {
//		printf("[A 원본 소문자] %s\n", line);
//		to_upper(line);
//		fprintf(bFile, line);
//		printf("[B 결과 대문자] %s\n", line);
//	}
//	fclose(bFile);
//	fclose(aFile);
//
//	printf("복사 완료 (소문자->대문자 변환)\n");
//	return 0;
//}


//문제17
//내가 태어나서 이제까지 몇 초 살았는지 계산하세요.(time(), mktime() 함수이용)
//#include <stdio.h>
//#include <time.h>
//int main()
//{
//	int y, m, d, hh, mm, ss;
//	printf("생년월일 입력 (예: 1995 6 10): ");
//	if (scanf("%d %d %d", &y, &m, &d) != 3) {
//		printf("입력 오류");
//		return 1;
//	}
//	printf("태어난 시간 입력 (예: 22 0 0): ");
//	if (scanf("%d %d %d", &hh, &mm, &ss) != 3) {
//		printf("입력 오류");
//		return 1;
//	}
//	time_t now = time(NULL);
//	//현재시각을 time_t 타입(1970년부터의 초)으로 반환. 값만 now에 입력.
//
//	struct tm birth_tm = {};		//struct tm은 날짜/시간을 구성요소로 담는 구조체
//	birth_tm.tm_year = y - 1900;	//1900년 부터의 년수
//	birth_tm.tm_mon = m - 1;		//0 = 1월
//	birth_tm.tm_mday = d;
//	birth_tm.tm_hour = hh;
//	birth_tm.tm_min = mm;
//	birth_tm.tm_sec = ss;
//
//	time_t birth = mktime(&birth_tm);	//태어난 순간을 초로 환산한 값을 birth에 입력.
//
//	double diff_sec = difftime(now, birth);	//현재 - 태어난 시각 = 몇 초 지났는지 계산.
//	if (diff_sec < 0) {
//		printf("오류: 생년월일/시각이 현재보다 미래입니다.");
//		return 1;
//	}
//
//	long total = (long)diff_sec;	//전체 초를 total에 입력
//	long days = total / 86400;		//전체(초) / 하루(초) = 일
//	long rem = total % 86400;		//하루로 못채운 남은 초
//	long hours = rem / 3600;		//하루 못채운 남은 시간
//	rem %= 3600;					//시간으로 못채운 남은 초
//	long mins = rem / 60;			//하루 못채운 남은 분
//	long secs = rem % 60;			//하루 못채운 남은 초
//
//	printf("\n태어나서 지금까지:\n");
//	printf("총 %ld 초\n", total);
//	printf("= %ld 일, %ld 시간, %ld 분, %ld 초\n", days, hours, mins, secs);
//
//	return 0;
//}


//문제18-1
//두 수를 교환하는 함수를 만들어보세요.(call by address(주소 전달))
//#include <stdio.h>
//void swap_addr(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main() {
//	int x = 10, y = 20;
//	printf("Before: x=%d, y=%d\n", x, y);
//	swap_addr(&x, &y);
//	printf("After : x=%d, y=%d\n", x, y);
//	return 0;
//}


//문제18-2
//두 수를 교환하는 함수를 만들어보세요.(call by reference(참조 호출))
//#include <stdio.h>
//void swap_addr(int& a, int& b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main() {
//	int x = 10, y = 20;
//	printf("Before: x=%d, y=%d\n", x, y);
//	swap_addr(x, y);
//	printf("After : x=%d, y=%d\n", x, y);
//	return 0;
//}


//문제19
//포커(카드52장) 게임을 위해 카드섞기(shuffling) 하는 함수를 만들어보세요.(rand() 이용)
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//struct Card {
//	int suit;	//0~3
//	int rank;	//1~13 (1=A, 11=J, 12=Q, 13=K)
//};
//void init_deck(Card deck[52]) {
//	int idx = 0;
//	for (int s = 0; s < 4; ++s) {
//		for (int r = 1; r <= 13; ++r) {
//			deck[idx].suit = s;
//			deck[idx].rank = r;
//			idx++;
//		}
//	}
//}
//void shuffle_deck(Card deck[52]) {
//	for (int i = 51; i > 0; --i) {
//		int j = rand() % (i + 1);
//		Card tmp = deck[i];
//		deck[i] = deck[j];
//		deck[j] = tmp;
//	}
//}
//const char* suit_str(int suit) {
//	static const char* s[] = { "♠", "♥", "◆", "♣" };
//	return s[suit];
//}
//const char* rank_str(int rank) {
//	static const char* r[] = {
//		"?","A","2","3","4","5","6","7","8","9","10","J","Q","K"
//	};
//	return r[rank];
//}
//void print_first_n(const Card deck[52], int n) {
//	for (int i = 0; i < n; ++i) {
//		printf("%s%s ", suit_str(deck[i].suit), rank_str(deck[i].rank));
//	}
//	putchar('\n');
//}
//int main()
//{
//	Card deck[52];
//	srand((unsigned)time(NULL));
//	init_deck(deck);
//	puts("초기 덱(앞 10장):");
//	print_first_n(deck, 10);
//
//	shuffle_deck(deck);
//	puts("셔플 후(앞 10장):");
//	print_first_n(deck, 10);
//
//	puts("포커 5장: ");
//	print_first_n(deck, 5);
//
//	return 0;
//}


//문제 20
//자기이름의 코드값을 출력하는 프로그램을 작성하세요.
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//
//int main(void)
//{
//    int lan;
//    char name[100];
//
//    printf("Input name: ");
//    scanf("%s", name);
//    
//    int len = strlen(name);
//
//    printf("\nByte codes:\n");
//    for (int i = 0; i < len; i++) {
//        char c = name[i];
//        printf("%3d(0x%02X) ", c, c);
//        //printf("%3u(0x%02X) ", (unsigned)c, c);
//    }
//    printf("\n");
//    return 0;
//}


//#include <iostream>
//void main()
//{
//	int number;
//	int count;
//	std::cin >> number >> count;
//	std::cout << "new : " << number << " " << count << std::endl;
//}


//#include <iostream>
//using namespace std;
//void main()
//{
//	int number;
//	int count;
//	cin >> number >> count;
//	cout << "new : " << number << " " << count << endl;
//}


//#include <iostream>
//#include <fstream>
//using namespace std;
//int main(void)
//{
//	int* buff;
//	buff = new int[2];
//	cin >> buff[0] >> buff[1];
//
//	ofstream fout("file.txt");
//	fout << buff[0] << " " << buff[1] << endl;
//	fout.close();
//
//	ifstream fin;
//	fin.open("file.txt");
//	fin >> buff[0] >> buff[1];
//	cout << "new : " << buff[0] << " " << buff[1] << endl;
//	fin.close();
//
//	delete buff;
//	return 0;
//}


//심화_41p_문제1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	int ret[10] = {};
	srand((unsigned)time(NULL));

	printf("학생 인원을 입력하세요: ");
	int num;
	scanf("%d", &num);

	printf("성적: ");
	for (i = 0; i < num; i++) {
		int score = rand() % 100 + 1;
		ret[i] = score;
		printf("%d ", score);
	}
	if(ret[i])

	return 0;
}


//#include <stdio.h>
//void print_arr(const int a[], int n) {
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void swap_int(int* a, int* b) {
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
////선택정렬: i번째 자리에 들어갈 "최소값"을 찾아서 swap
//void selection_sort(int a[], int n) {
//	for (int i = 0; i < n - 1; i++) {		//몇 번째 바퀴인지, 한바퀴 돌때마다 다음 인덱스
//		int min_idx = i;					//현재 i 위치가 최소 라고 가정하고 시작
//		for (int j = i + 1; j < n; j++) {	//j는 i다음칸부터 확인하면서
//			if (a[j] < a[min_idx]) {		//더 작은 값을 발견하면
//				min_idx = j;				//더 작은값을 min_idx로 입력
//			}
//		}
//		if (min_idx != i) {					//최소값이 i자리에 있으면 swap 안함
//			swap_int(&a[i], &a[min_idx]);	//아니면 a[i]와 a[min_idx] 값을 바꿈
//		}
//	}
//}
//int main() {
//	int a1[] = { 5,2,9,1,3 };
//	int n = (int)(sizeof(a1) / sizeof(a1[0]));
//
//	printf("원본: ");
//	print_arr(a1, n);
//
//	selection_sort(a1, n);
//	printf("선택정렬: ");
//	print_arr(a1, n);
//
//	return 0;
//}