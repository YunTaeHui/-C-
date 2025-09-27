#include <stdio.h>

void main()
{
	int i, k;

	for (i = 9; i >= 1; i--)
	{
		for (k = 9; k >= 2; k--)
		{
			printf("%dX%d=%2d   ", k, i, k * i);
		}
	}
}