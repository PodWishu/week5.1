#include <stdio.h>

int main()
{
	int a[4], even = 0;

	for (int i = 0; i < 4; i++)
	{
		printf("num[%d] = ", i + 1);
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		if (a[i] % 2 == 0)
		{
			even = even + 1;
		}
	}
	printf("number of even numbers = %d", even);
	return 0;
}