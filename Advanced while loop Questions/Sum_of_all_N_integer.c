#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the Number = ");
    scanf("%d",&n);

    int temp =0;
    int i = 1;
    while(i<=n)
    {
        temp = temp + i;
        i++;
    }
    printf("%d",temp);
}
