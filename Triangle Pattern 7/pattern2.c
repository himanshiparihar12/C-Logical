/*
    10 9 8 7
       6 5 4
         3 2
           1

*/

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number = ");
    scanf("%d",&n);
    int a = 10;
    for(int i=n; i>=1; i--)
    {
        for(int j=n; j>=1; j--)
        {
            if(j<=i)
            {
                printf("%d ",a);
                a--;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
