// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);

    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=n; y++)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
}
