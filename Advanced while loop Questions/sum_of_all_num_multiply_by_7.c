// WIRITE A PROGRAM THAT SUM ALL THE MULTIPLE OF 7 BETWEEN 1 TO 500

#include<stdio.h>
int main()
{
    int i = 1;
    int sum = 0;
    while(i<=500)
    {
        if(i%7==0)
        {
            sum = sum+i;

        }
        i++;
    }
    printf("The sum of all numbers multiply by 7 between 1 to 500 = %d",sum);
}
