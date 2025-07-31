/*
    1 2 3 4
      5 6 7
        8 9
          10
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
                printf("%d ",a);
                a++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
