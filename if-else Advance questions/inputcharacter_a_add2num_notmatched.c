//write a program in c input character and check character is a : add two number otherwise : input not matched

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character = ");
    scanf("%c", &ch);
    if(ch == 'a')
    {
        int a , b;
        printf("Enter the value of a = ");
        scanf("%d", &a);
        printf("Enter the value of b = ");
        scanf("%d", &b);
        printf("Value of two numbers is = %d",a+b);
    }
    else
        printf("input is not matched");

}

