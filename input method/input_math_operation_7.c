//3.4 + 1.2 * ( 3.7 - 1.2 ) / 2 + 6.8

#include<stdio.h>
int main()
{
    int a, b , c , d , e , f , g , h , i , j , k;
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

    printf("Enter the value of F = ");
    scanf("%d", &f);

    g = c - d;
    h = g / e;
    i = a * b;
    j = i + h;
    k = j + f;
    printf("Value of K = %d" , k);
}
