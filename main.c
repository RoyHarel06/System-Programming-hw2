#include <stdio.h>
#include "my_mat.h"

int main()
{
    int* mat = malloc(MAT_VERTICE*MAT_VERTICE*MAT_CELL_SIZE);

    char command = 'A';
    scanf("%c", &command);
    while(command != 'D')
    {
        if (command == 'A') // init 'mat'
        {
            userInitMatrix(mat);
        }
        else if (command == 'B')    // check existance of path
        {
            int i = 0, j = 0;
            scanf("%d %d", &i, &j);

            if (checkForPath(mat, i, j))
                printf("True");
            else
                printf("False");
        }
        else if (command == 'C')    // find value of shortest path
        {
            int i = 0, j = 0;
            scanf("%d %d", &i, &j);

            int result = findShortestPath(mat, i, j);
            printf("%d", result);
        }

        printf("\n");
    }

    free(mat);

    return 0;
}