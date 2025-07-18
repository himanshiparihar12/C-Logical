//WRITE A PROGRAM TO FIND THE SQUAREROOT OF ANY NUMBER


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);

    int i = 1;
    while(i*i<=n)
    {
        i++;
    }
    printf("%d",i-1);
}
