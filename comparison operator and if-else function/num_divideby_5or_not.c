//ERITE A PROGRAM OF INPUT NUMBER AND CHECK NUMBER IS divide by 5 or not

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number = ");
    scanf("%d" , &num);
    if(num%5==0)
    {
            printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is not Divisible by 5");
    }
}

