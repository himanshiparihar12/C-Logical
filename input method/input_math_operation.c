//56 * 34 + 12 / 2 - 13

#include<stdio.h>
int main()
{
    int a, b , c , d , e , f , g , h , i ;
    printf("Enter the value of A = ");
    scanf("%d" , &a);

    printf("Enter the value of B = ");
    scanf("%d", &b);

    printf("Enter the value of C = ");
    scanf("%d", &c);

    printf("Enter the value of D = ");
    scanf("%d", &d);

    printf("Enter the value of E = ");
    scanf("%d", &e);

    f = c / d;
    g = a * b;
    h = f + g;
    i = h - e;
    printf("Value of I = %d" , i);
}
