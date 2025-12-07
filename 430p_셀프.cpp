//430p
//[기본 13-3]에서 값을 입력받는 15행, 18행, 21행을 지우고 구조체 변수에 초깃값을 대입하여 빌드하고 실행해보자.
#include <stdio.h>

void main()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s = { "Woo", 90, 80 };

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("\n -- 구조체 활용 -- \n");
	printf("학생 이름 ==> %s\n", s.name);
	printf("국어 점수 ==> %d\n", s.kor);
	printf("영어 점수 ==> %d\n", s.eng);
	printf("평균 점수 ==> %5.1f\n", s.avg);
}
