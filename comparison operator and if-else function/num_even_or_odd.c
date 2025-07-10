//ERITE A PROGRAM OF INPUT NUMBER AND CHECK NUMBER IS EVEN OR ODD

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number = ");
    scanf("%d" , &num);
    if(num%2==0)
    {
            printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }
}
