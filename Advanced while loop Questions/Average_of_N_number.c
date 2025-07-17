// WRITE A PROGRAM TO CALCULATE THE AVERAGE OF N NUMBER ENTERED BY THE USER

#include<stdio.h>
int main()
{
    int n;
    printf("ENTER HOW MANY NUMBER YOU WANT = ");
    scanf("%d",&n);

    int i;
    float num , sum=0;

    while(i<=n)
    {
        printf("ENTER THE NUMBER " , i);
        scanf("%f",&num);

        sum += num;
        i++;
    }
    printf("Average %f=",sum);

}
