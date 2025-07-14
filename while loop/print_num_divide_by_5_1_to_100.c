//WRITE A PROGRAM FOR PRINT NUMBERS FROM 1 TO 100 BUT PRINT THOSE THAT ARE DIVISIBLE BY 5 USING WHILE NUMBER


#include<stdio.h>
int main()
{
    int n = 1;
    while(n <= 100)
    {
        if(n%5==0)
        {
            printf("%d \n" , n);

        }
        n++;
    }
}
