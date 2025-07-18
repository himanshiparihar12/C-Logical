//WRITE A PROGRAM TO COMPUTE THE FACTORIAL OF A GIVEN NUMBER USING A WHILE LOOP

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number = ");
    scanf("%d",&n);

    int prod =1;
    while(n>0)
    {
        prod=prod*n;
        n--;
    }
    printf("Factorial of a number = %d",prod);
}
