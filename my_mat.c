#include "my_mat.h"

void userInitMatrix(int* mat)
{
    for (int i = 0; i < MAT_VERTICE; i++)
    {
        for (int j = 0; j < MAT_VERTICE; j++)
        {
            scanf("%d", (int*) *MAT_CELL(i, j, mat));

            if (i != j && *MAT_CELL(i, j, mat) == 0)
                *MAT_CELL(i, j, mat) = -1;
        }
    }
}

int findShortestPath(int* mat, int i, int j)
{
    int* temp = malloc(MAT_VERTICE*MAT_VERTICE*MAT_CELL_SIZE);
    memcpy(temp, mat, MAT_VERTICE*MAT_VERTICE*MAT_CELL_SIZE);

    for (int k = 0; k < MAT_VERTICE; k++)
    {
        for (int p = 0; p < MAT_VERTICE; p++)
        {
            for (int t = 0; t < MAT_VERTICE; t++)
            {
                if (*MAT_CELL(p, t, temp) > *MAT_CELL(p, k, temp) + *MAT_CELL(k, t, temp))
                    *MAT_CELL(p, t, temp) = *MAT_CELL(p, k, temp) + *MAT_CELL(k, t, temp);
            }
        }
    }

    int result = *MAT_CELL(i, j, temp);
    free(temp);

    return result;
}

int checkForPath(int* mat, int i, int j)
{
    int result = findShortestPath(mat, i, j);
    if (result == -1)
        return 0;
    else
        return result;
}