/* A A A A
   B B B B
   C C C C
   D D D D
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        char val='A'+i;
        for(int j = 0; j < n; j++)
        {
            printf("%c ",val);

        }
        printf("\n");
    }

    return 0;
}
