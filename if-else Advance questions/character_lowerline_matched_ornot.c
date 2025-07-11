//write a program in c input character and check character is z , x, c, v, b, n, m:lower line otherwise : input not matched

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character = ");
    scanf("%c", &ch);

    if(ch == 'z' || ch == 'x' || ch == 'c' || ch == 'v' || ch == 'b' || ch == 'n' || ch == 'm')
        printf("Lower line");
    else
        printf("input is not matched");
}

