//WRITE A PROGRAM TO COMPUTE THE SUM OF ALL EVEN NUMBERS BETWEEN 1 TO 100

#include<stdio.h>

int main() {
    int i = 1;
    int sum = 0;

    while(i <= 100) {
        if(i % 2 == 0) {
            sum += i;
        }
        i++;
    }

    printf("SUM OF ALL EVEN NUMBERS FROM 1 TO 100 = %d\n", sum);

    return 0;
}
