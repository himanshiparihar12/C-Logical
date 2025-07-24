/*  19
    17 15
    13 11 9
    7  5  3 1

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value = ");
    scanf("%d",&n);

    int a=19;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",a);
            a-=2;
        }
        printf("\n");
    }
}
