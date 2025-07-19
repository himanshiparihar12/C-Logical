/* 1 3 5 7
   1 3 5 7
   1 3 5 7
   1 3 5 7
*/

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the Number = ");
    scanf("%d",&n);

    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=n*2; y+=2)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
}
