/* 7 5 3 1
   7 5 3 1
   7 5 3 1
   7 5 3 1
*/

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the Number = ");
    scanf("%d",&n);

    for(int x=1; x<=n; x++)
    {
        for(int y=n*2-1; y>=1; y-=2)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
}

