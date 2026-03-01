//443p
//mon은 1, tue는 2, ... , sun은 7을 의미하도록 [기본 13-8]을 수정해보자.
#include <stdio.h>
void main()
{
	enum week { sun = 7, mon = 1, tue, wed, thu, fri, sat };

	enum week ww;

	ww = sat;

	if (ww == 7)
		printf("오늘은 일요일입니다.\n");
	else
		printf("오늘은 일요일이 아닙니다.\n");
}
