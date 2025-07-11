//write a program in c input character and check character is s : sub four number otherwise : input not matched

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character = ");
    scanf("%c", &ch);
    if(ch == 's')
    {
        int a , b , c , d, e;
        printf("Enter the value of a = ");
        scanf("%d", &a);
        printf("Enter the value of b = ");
        scanf("%d", &b);
        printf("Enter the value of c = ");
        scanf("%d", &c);
        printf("Enter the value of d = ");
        scanf("%d", &d);
        e = a - b - c - d;
        printf("Value of two numbers is = %d",e);
    }
    else
        printf("input is not matched");

}

