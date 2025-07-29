/*
          4
        3 3
      2 2 2
    1 1 1 1

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value = ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=1; j--)
        {
            if(j<=i)
            {
                printf("%d ",n-i+1);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

