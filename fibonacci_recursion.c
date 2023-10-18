//Fibonacci series using recursion
#include <stdio.h>
int fibbo(int n);
int fibbo(int n)
{
    int a = 0, b = 1;
    if (n == 0)
    {
        return a;
    }
    else if (n == 1)
    {
        return b;
    }
    else
    {
        return fibbo(n - 1) + fibbo(n - 2);
    }
}

int main()
{
    int i, n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d,", fibbo(i));
    }
}