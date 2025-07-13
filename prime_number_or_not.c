//Write a Program in c for check a number is prime or not

#include<stdio.h>

int main()
{
    int n, count = 0, i = 2;

    printf("Enter the value = ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Not prime....");
        return 0;
    }

    while (i < n)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
        i++;
    }

    if (count == 0)
    {
        printf("Prime....");
    }
    else
    {
        printf("Not prime....");
    }

    return 0;
}
