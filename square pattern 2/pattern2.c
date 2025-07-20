/* 2 4 6 8
   2 4 6 8
   2 4 6 8
   2 4 6 8
*/

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the Number = ");
    scanf("%d",&n);

    for(int x=1; x<=n; x++)
    {
        for(int y=2; y<=n*2; y+=2)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
}

