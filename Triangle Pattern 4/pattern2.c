/*
    2  4  6  8
    10 12 14
    16 18
    20
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value = ");
    scanf("%d",&n);

    int a=2;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
}
