/*
    1 2 3 4
    5 6 7
    8 9
    10

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value = ");
    scanf("%d",&n);

    int a=1;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}

