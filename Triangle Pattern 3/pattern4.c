/*
    10 9 8 7
    6 5 4
    3 2
    1
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value = ");
    scanf("%d",&n);

    int a=10;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
}

