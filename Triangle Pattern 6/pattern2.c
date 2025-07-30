/*
             20
          18 16
       14 12 10
    8  6  4  2

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value = ");
    scanf("%d",&n);

    int a=20;
    for(int i=1; i<=n; i++)
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
                a-=2;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}



