/*
    1 1 1 1
      2 2 2
        3 3
          4
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



