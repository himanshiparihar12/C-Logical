// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);

    for(int x=1; x<=n; x++)
    {
        for(int y=n; y>=1; y--)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
}
