/*2  4  6  8
  10 12 14 16
  18 20 22 24
  26 28 30 32
*/

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the Number = ");
    scanf("%d",&n);

    int a=2;
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


