/* 1  3  5  7
   9 11 13 15
   17 19 21 23
   25 27 29 31
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
            a+=2;
        }
        printf("\n");
    }
}

