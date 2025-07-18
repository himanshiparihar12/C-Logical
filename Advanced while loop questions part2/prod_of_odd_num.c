//WRITE A PROGRAM TO FIND THE PRODUCT OF ALL ODD NUMBERS FROM 1 TO N WHERE N IS ENTERED BY USER

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);

    int prod = 1 , i =1;
    while(i<=n)
    {
        if(i%2!=0)
        {
            prod = prod*i;

        }
        i++;
    }
    printf("Produt of all odd numbers = %d",prod);
}
