//½ÉÈ­_12p_¹®Á¦_1
#include <stdio.h>

int add_number(int num1, int num2)
{
	int retVal = num1 + num2;
	return retVal;
}
int sub_number(int num1, int num2)
{
	int retVal = num1 - num2;
	return retVal;
}
int mul_number(int num1, int num2)
{
	int retVal = num1 * num2;
	return retVal;
}
float div_number(int num1, int num2)
{
	float retVal = (float)num1 / num2;
	return retVal;
}

int main()
{
	int a = 1, b = 2;
	int data1 = add_number(a, b);
	int data2 = sub_number(a, b);
	int data3 = mul_number(a, b);
	float data4 = div_number(a, b);

	printf("µ¡¼À °á°ú : %d\n", data1);
	printf("»¬¼À °á°ú : %d\n", data2);
	printf("°ö¼À °á°ú : %d\n", data3);
	printf("³ª´°¼À °á°ú : %.1f\n", data4);
	return 0;
}