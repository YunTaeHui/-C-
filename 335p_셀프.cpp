//335p
//[기본 10-3]의 main() 함수에서 커피 세 잔의 주문 과정을 for문으로 바꿔보자.
#include <stdio.h>

int coffee_machine(int button)
{
	printf("\n# 1. (자동으로) 뜨거운 물을 준비한다\n");
	printf("# 2. (자동으로) 종이컵을 준비한다\n");

	switch (button)
	{
	case 1: printf("# 3. (자동으로) 보통커피를 탄다\n"); break;
	case 2: printf("# 3. (자동으로) 설탕커피를 탄다\n"); break;
	case 3: printf("# 3. (자동으로) 블랙커피를 탄다\n"); break;
	default: printf("# 3. (자동으로) 아무거나 탄다\n"); break;
	}

	printf("# 4. (자동으로) 물을 붓는다\n");
	printf("# 5. (자동으로) 스푼으로 저어서 녹인다\n\n");

	return 0;
}

void main()
{
	int coffee;
	int ret, i;

	for (i = 'A'; i < 'A' + 3; i++)
	{
		printf("%c님, 어떤 커피를 드릴까요? (1:보통, 2:설탕, 3:블랙) ", i);
		scanf("%d", &coffee);
		ret = coffee_machine(coffee);
		printf("%c님~ 커피 여기 있습니다.\n\n", i);
	}
}