#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3, cols = 3;
    int i, j, d;

    for (d = 0; d < rows + cols - 1; d++) {

        if (d % 2 == 0) {
            // Traverse upward
            i = (d < rows) ? d : rows - 1;
            j = d - i;

            while (i >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
                i--;
                j++;
            }
        } else {
            // Traverse downward
            j = (d < cols) ? d : cols - 1;
            i = d - j;

            while (j >= 0 && i < rows) {
                printf("%d ", matrix[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}
