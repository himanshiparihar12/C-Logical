// 4 4 4 4
// 3 3 3 3
// 2 2 2 2
// 1 1 1 1


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);

    for(int x=n; x>=1; x--)
    {
        for(int y=1; y<=n; y++)
        {
            printf("%d ",x);
        }
        printf("\n");
    }
}

