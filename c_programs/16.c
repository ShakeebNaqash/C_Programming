#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("By adding 1 to %d is %d",n, sum);

    return 0;
}