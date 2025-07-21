/*32 30 28 26
  24 22 20 18
  16 14 12 10
  8  6  4  2
*/

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the Number = ");
    scanf("%d",&n);

    int a=n*n*2;
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



