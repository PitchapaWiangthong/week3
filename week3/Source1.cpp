#include <stdio.h> 
int main()
{
    int x, num, sum = 0;
    scanf_s("%d", num);
    for (x = 0; x < num; x++)
    {
        if (x % 3 == 0 || x % 5 == 0)
        {
            sum += x;
        }
    }
    printf("%d", sum);
    return 0;
}