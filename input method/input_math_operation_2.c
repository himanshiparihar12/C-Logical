//1.2 * 6.7 - 4.5 / 2

#include<stdio.h>
int main()
{
    float a, b , c , d , e , f , g ;
    printf("Enter the value of A = ");
    scanf("%f" , &a);

    printf("Enter the value of B = ");
    scanf("%f", &b);

    printf("Enter the value of C = ");
    scanf("%f", &c);

    printf("Enter the value of D = ");
    scanf("%f", &d);

    e = c / d;
    f = a * b;
    g = f - e;
    printf("Value of G = %f" , g);
}
