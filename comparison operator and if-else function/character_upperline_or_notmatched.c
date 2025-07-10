//ERITE A PROGRAM OF INPUT NUMBER AND CHECK CHARACTER IS Q ,W ,E ,R T, Y, U, I, O, P IS UPPTER LINE OTHERWISE = INPUT IS NOT MATCHED


#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the letter = ");
    scanf("%c" , &ch);
    if(ch == 'q' || ch == 'w' || ch == 'e' || ch == 'r' || ch == 't' ||ch == 'y' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'p')
    {
            printf("UPPER LINE");
    }
    else
    {
        printf("INPUT IS NOT MATCHED......");
    }
}
