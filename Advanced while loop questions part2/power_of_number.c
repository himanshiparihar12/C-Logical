// WRITE A PROGRAM TO CALCULATE THE POWER OF A NUMBER (X^Y) USING A WHILE LOOP

#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of X = ");
    scanf("%d",&x);

    int y;
    printf("Enter the value of Y = ");
    scanf("%d",&y);

    int pow = 1;
    while(y > 0)
    {
        pow = pow * x;
        y--;
    }
    printf("Power of a X = %d",pow);
}
