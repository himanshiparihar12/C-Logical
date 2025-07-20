/* 16 15 14 13
   12 11 10 9
   8  7  6  5
   4  3  2  1
*/

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the Number = ");
    scanf("%d",&n);
    int a=16;
    for(int x=n; x>=1; x--)
    {
        for(int y=n; y>=1; y--)
        {
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
}

