//ERITE A PROGRAM OF INPUT NUMBER AND CHECK character IF USER ENTER 'a' OUTPUT = apple
//AND IF USER INPUT OTHER CHARACTER OUTPUT = input is not matched


#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the letter = ");
    scanf("%c" , &ch);
    if(ch == 'a')
    {
            printf("apple");
    }
    else
    {
        printf("input s not matched");
    }
}
