#include "my_mat.h"

void userInitMatrix(int* mat)
{
    for (int i = 0; i < MAT_HEIGHT; i++)
    {
        for (int j = 0; j < MAT_WIDTH; j++)
        {
            scanf("%d", (int*) (mat+(j*MAT_CELL_SIZE)+(i*MAT_HEIGHT*MAT_CELL_SIZE)) );
        }
    }
}

int findShortestPath(int* mat, int i, int j)
{

}

int checkForPath(int* mat, int i, int j)
{
    int result = findShortestPath(mat, i, j);
    if (result == -1)
        return 0;
    else
        return result;
}