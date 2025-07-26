/*
    20 18 16 14
    12 10 8
    6  4
    2
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value = ");
    scanf("%d",&n);

    int a=20;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",a);
            a-=2;
        }
        printf("\n");
    }
}

