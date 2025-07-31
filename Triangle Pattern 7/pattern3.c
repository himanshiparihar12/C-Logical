/*
    1 3  5  7
      9 11 13
        15 17
           19

*/

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number = ");
    scanf("%d",&n);
    int a = 1;
    for(int i=n; i>=1; i--)
    {

        for(int j=n; j>=1; j--)
        {
            if(j<=i)
            {
                 if(a<10)
                {
                    printf(" ");
                }
                printf("%d ",a);
                a+=2;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}


