// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4


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
            printf("%d ",x);
        }
        printf("\n");
    }
}
