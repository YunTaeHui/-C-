//기본 10-1 타이핑 329p
//#include <stdio.h>
//
//void main()
//{
//	int coffee;
//
//	printf("어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
//	scanf("%d", &coffee);
//
//	printf("\n# 1. 뜨거운 물을 준비한다.\n");
//	printf("# 2. 종이컵을 준비한다.\n");
//
//	switch (coffee)
//	{
//	case 1: printf("# 3. 보통커피를 탄다\n"); break;
//	case 2: printf("# 3. 설탕커피를 탄다\n"); break;
//	case 3: printf("# 3. 블랙커피를 탄다\n"); break;
//	default: printf("# 3. 아무거나 탄다\n"); break;
//	}
//
//	printf("# 4. 물을 붓는다\n");
//	printf("# 5. 스푼으로 저어서 녹인다\n\n");
//
//	printf("손님 커피 여기 있습니다.\n\n");
//}


//기본 10-2 타이핑 332p
//#include <stdio.h>
//
//int coffee_machine(int button)
//{
//	printf("\n# 1. (자동으로) 뜨거운 물을 준비한다\n");
//	printf("# 2. (자동으로) 종이컵을 준비한다\n");
//
//	switch (button)
//	{
//	case 1: printf("# 3. (자동으로) 보통커피를 탄다\n"); break;
//	case 2: printf("# 3. (자동으로) 설탕커피를 탄다\n"); break;
//	case 3: printf("# 3. (자동으로) 블랙커피를 탄다\n"); break;
//	default: printf("# 3. (자동으로) 아무거나 탄다\n"); break;
//	}
//
//	printf("# 4. (자동으로) 물을 붓는다\n");
//	printf("# 5. (자동으로) 스푼으로 저어서 녹인다\n\n");
//
//	return 0;
//}
//
//void main()
//{
//	int coffee;
//	int ret;
//
//	printf("어떤 커피를 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
//	scanf("%d", &coffee);
//
//	ret = coffee_machine(coffee);
//
//	printf("손님~ 커피 여기 있습니다.\n\n");
//}


//기본 10-3 타이핑 334p
#include <stdio.h>

int coffee_machine(int button)
{
	printf("\n# 1. (자동으로) 뜨거운 물을 준비한다.\n");
	printf("# 2. (자동으로) 종이컵을 준비한다.\n");

	switch (button)
	{
	case 1: printf("# 3. (자동으로) 보통커피를 탄다\n"); break;
	case 2: printf("# 3. (자동으로) 설탕커피를 탄다\n"); break;
	case 3: printf("# 3. (자동으로) 블랙커피를 탄다\n"); break;
	default: printf("# 3. (자동으로) 아무거나 탄다\n"); break;
	}

	printf("# 4. (자동으로) 물을 붓는다\n");
	printf("# 5. (자동으로) 스푼으로 저어서 녹인다\n");

	return 0;
}

void main()
{
	int coffee;
	int ret;

	printf("A님, 어떤 커피를 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("A님 커피 여기 있습니다.\n\n");

	printf("B님, 어떤 커피를 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("B님 커피 여기 있습니다.\n\n");

	printf("C님, 어떤 커피를 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("C님 커피 여기 있습니다.\n\n");
}
