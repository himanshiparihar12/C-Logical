/*
    4 4 4 4
      3 3 3
        2 2
          1

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value = ");
    scanf("%d",&n);

    for(int i=n; i>=1; i--)
    {
        for(int j=n; j>=1; j--)
        {
            if(j<=i)
            {
                printf("%d ",i);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}


