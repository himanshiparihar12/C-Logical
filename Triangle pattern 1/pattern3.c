/*  4
    3 3
    2 2 2
    1 1 1 1
*/


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value = ");
    scanf("%d",&n);

    for(int i=n; i>=1; i--)
    {
        for(int j=n; j>=i; j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
