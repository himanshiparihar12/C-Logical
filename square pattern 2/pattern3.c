/* 8 6 4 2
   8 6 4 2
   8 64 2
   8 6 4 2
*/

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the Number = ");
    scanf("%d",&n);

    for(int x=1; x<=n; x++)
    {
        for(int y=n*2; y>=2; y-=2)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
}

