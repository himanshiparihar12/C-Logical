#include<stdio.h>
int main()
{
    int a = 1, b = 2;
    printf("%d", --b - ++a + ++b - --a);
}
