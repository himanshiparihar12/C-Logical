//write a program in c input character and check character is a , s , d, f , g , h, j, k, l:mid line otherwise : input not matched

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character = ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l')
        printf("Mid line");
    else
        printf("input is not matched");
}
