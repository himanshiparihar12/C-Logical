//write a program in c input character and check character is s : swap 2 number with third variable otherwise : input not matched

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character = ");
    scanf("%c", &ch);
    if(ch == 'w')
    {
        int a , b ,temp;
        printf("Enter the value of a = ");
        scanf("%d", &a);
        printf("Enter the value of b = ");
        scanf("%d", &b);
        temp = a;
        a = b;
        b = temp;

        printf("Value of swapping two numbers is a= %d , b = %d",a , b);
    }
    else
        printf("input is not matched");

}

