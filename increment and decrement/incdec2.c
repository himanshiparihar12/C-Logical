#include<stdio.h>
int main()
{
    int i = 1, j = 2, k = 3;
    int m = i-- - j-- - k--;
    printf("i=%d\n", i);
    printf("j=%d\n", j);
    printf("k=%d\n", k);
    printf("m=%d\n", m);
}
