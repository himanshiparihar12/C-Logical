/* A B C D
   A B C D
   A B C D
   A B C D
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        char val='A';
        for(int j = 0; j < n; j++)
        {
            printf("%c ",val);
            val++;
        }
        printf("\n");
    }

    return 0;
}
