
/* P O M N
   L K J I
   H G F E
   D C B A
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);

    char val='P';
    for(int i = 0; i < n; i++)
    {

        for(int j = 0; j < n; j++)
        {
            printf("%c ",val);
            val--;
        }
        printf("\n");
    }

    return 0;
}

