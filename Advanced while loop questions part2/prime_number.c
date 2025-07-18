// WRITE A PROGRAM TO CHECK WHEATER A NUMBER IS PRIME OR NOT

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);

    int temp = 0 , i = 1;
    while(i<=n)
    {
        if(n%i==0)
        {
            temp+=1;

        }
        i++;
    }
    if(temp==2)
        {
            printf("Prime number");
        }
        else
        {
            printf("Not prime");
        }
}
