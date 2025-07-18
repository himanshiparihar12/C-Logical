// WRITE A PROGRAM TOH CALCULATE THE PRIME FACTOR OF GIVEN TWO NUMBERS

#include<stdio.h>
int main()
{
    int m;
    printf("Enter the number of m =");
    scanf("%d",&m);

    int n;
    printf("Enter the number of n = ");
    scanf("%d",&n);

    int prod = 1;
    int i =2;
    while(n>1 || m>1)
    {
        if(n%i==0 || m%i==0)
        {
            printf("%d",i);
            if(n%i==0)
            {
                n=n/i;
            }
            if(m%i==0)
            {
                m=m/i;
            }
            prod = prod*i;
        }
        else
        {
            i++;
        }
    }
}
