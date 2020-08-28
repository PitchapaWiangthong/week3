#include<stdio.h>
int main()
{
	long num[5], min, max;
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%ld", &num[i]);
	}
	min = num[0];
	max = num[0];
	for (int i = 0; i < 5; i++)
	{
		if (num[i] <= min)
		{
			min = num[i];
		}
		else if (num[i] >= max)
		{
			max = num[i];
		}
	}
	printf("%ld ", min);
	printf("%ld", max);
}
