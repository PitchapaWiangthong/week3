#include<stdio.h>
int main()
{
	int a, b, x, sum = 0;
	scanf_s("%d %d", &a, &b);
	if (a < b)
	{
		x = a;
		for (; b % x != 0 || a % x != 0;)
		{
			x--;

		}
		printf("%d", x);
	}
	else if (b < a)
	{
		x = b;
		for (; a % x != 0 || b % x != 0;)
		{
			x--;

		}
		printf("%d", x);
	}
	else
	{
		printf("1");
	}
	return 0;
}
