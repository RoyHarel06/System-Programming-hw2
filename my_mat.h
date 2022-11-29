#define MAT_HEIGHT      10
#define MAT_WIDTH       10
#define MAT_CELL_SIZE   sizeof(int)

/*
 * Initilizes matrix 'mat' using the user's input.
 */
void userInitMatrix(int* mat);

/*
 * Finds the shortest path from 'i' to 'j' using our mat.
 */
int findShortestPath(int* mat, int i, int j);

/*
 * Check for a path from 'i' to 'j' using our mat.
 */
int checkForPath(int* mat, int i, int j);