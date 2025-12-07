//460p
//실제 매개변수의 개수와 매개변수의 내용만 나오도록 [기본 14-1]을 수정해보자. 즉 '14-1.exe 100 200'을 입력하면
//개수는 2, 내용은 100과 200만 나오게 하는 것이다.
#include <stdio.h>

void main(int argc, char* argv[])
{
	int realc;

	if (argc > 0) realc = argc - 1;
	else realc = 0;

	printf(" %d \n", realc);

	for (int i = 1; i < argc; i++)
		printf("%s \n", argv[i]);
}