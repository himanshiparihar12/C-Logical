//4.5 * 1.2 - (82/2) - 5.6 + 1.234

#include<stdio.h>
int main()
{
    float a, b , c , d , e , f , g , h , i , j , k;
    printf("Enter the value of A = ");
    scanf("%f" , &a);

    printf("Enter the value of B = ");
    scanf("%f", &b);

    printf("Enter the value of C = ");
    scanf("%f", &c);

    printf("Enter the value of D = ");
    scanf("%f", &d);

    printf("Enter the value of E = ");
    scanf("%f", &e);

    printf("Enter the value of F = ");
    scanf("%f", &f);

    g = c / d;
    h = a * b;
    i = h - g;
    j = i - e;
    k = j + f;
    printf("Value of K = %f" , k);
}
