//  take gender as char - m(male) - f(female)
//   - age
//  m age >=21 - He can marry
//  padhai likhai kero IAS / WAS banno
//  f age >= 18 - She can Marry
//   - choti bachi ho kya!!!1
//  -gender is not valid

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your Gender = ");
    scanf("%c" , &ch);

    if(ch=='m' || ch=='f')
    {
        int age;
        printf("Enter the age = ");
        scanf("%d" , &age);

        if(ch=='m' && age >= 21)
        {
            printf("He can marry \n");
        }
        else if(ch=='m' && age < 21)
        {
            printf("Padhai likha kero IAS / WAS banno");
        }
        else if(ch=='f' && age >= 21)
        {
            printf("She can marry...");
        }
        else
        {
            printf("Choti bachhi ho kya.....");
        }
    }
}
