//ERITE A PROGRAM OF INPUT NUMBER AND CHECK NUMBER IS GREATER THAN 10 OR NOT

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number = ");
    scanf("%d" , &num);
    if(num >= 10)
    {
            printf("Number is greater than 10");
    }
    else
    {
        printf("Number is less then 10...");
    }
}
