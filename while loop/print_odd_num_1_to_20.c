//WRITE A PROGRAM FOR PRINT ODD NUMBERS FROM 1 TO 20 USING WHILE NUMBER


#include<stdio.h>
int main()
{
    int n = 1;
    while(n <= 20)
    {
        if(n%2!=0)
        {
            printf("%d \n" , n);

        }
        n++;
    }
}
