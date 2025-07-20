/* 1  2  3  4
   5  6  7  8
   9  10 11 12
   13 14 15 16
*/

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the Number = ");
    scanf("%d",&n);
    int a=1;
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=n; y++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}

