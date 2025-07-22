/* A C E G
   I K M O
   Q S U W
   Y Z
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);

    char val='A';
    for(int i = 0; i < n; i++)
    {

        for(int j = 0; j < n; j++)
        {
            printf("%c ",val);
            val+=2;
        }
        printf("\n");
    }

    return 0;
}


