//To print half diamond star pattern
#include <stdio.h>

void main()
{
    int i, j, k;
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--)
    {
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    
}
