//ERITE A PROGRAM OF INPUT NUMBER AND CHECK character is vowel or consonent


#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the letter = ");
    scanf("%c" , &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
            printf("CHARACTER IS VOWEL");
    }
    else
    {
        printf("CHARACTER IS CONSONANT");
    }
}
