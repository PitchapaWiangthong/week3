#include<stdio.h>
int main()
{
	int num[5], min, max;
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &num[i]);
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
	printf("%d ", min);
	printf("%d", max);
}