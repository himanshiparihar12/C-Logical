/* 31 29 27 25
   23 21 19 17
   15 13 11 9
   7  5  3  1
*/

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the Number = ");
    scanf("%d",&n);

    int a=31;
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=n; y++)
        {
            printf("%d ",a);
            a-=2;
        }
        printf("\n");
    }
}


