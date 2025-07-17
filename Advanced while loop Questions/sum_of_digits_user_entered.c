//WRITE A PROGRAM COMPUTE THE SUM OF DIGITS OF A GIVEN NUMBER

#include<stdio.h>
int main()
{
    int num ;
    printf("Enter the value = ");
    scanf("%d",&num);

    int sum = 0;
    while(num > 0)
    {
        sum+=num%10;
        num/=10;
    }
    printf("Sum of entered number is = %d",sum);
}
