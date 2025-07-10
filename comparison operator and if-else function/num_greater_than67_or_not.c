//ERITE A PROGRAM OF INPUT NUMBER AND CHECK NUMBER IS GREATER THAN 67 OR NOT

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number = ");
    scanf("%d" , &num);
    if(num >= 67)
    {
            printf("Number is greater than 67");
    }
    else
    {
        printf("Number is less then 67...");
    }
}
