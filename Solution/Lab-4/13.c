// 13. Write a program to calculate sum of numbers from m to n.

#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum of numbers from %d to %d is %d", m, n, sum);

    return 0;
}