#include <stdio.h>

int main() {
    int rows, cols, first_Diagonal = 0, second_Diagonal = 0;

    // Input for matrix dimensions
    printf("Enter number of rows for the matrix: ");
    scanf("%d", &rows);

    printf("Enter number of columns for the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Input for matrix elements
    for (int i = 0; i < rows; i++) {
        for (int x = 0; x < cols; x++) {
            printf("Enter value at Matrix[%d][%d]: ", i, x);
            scanf("%d", &matrix[i][x]);
        }
    }

    // Display the matrix
    printf("Entered Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int x = 0; x < cols; x++) {
            printf("%d  ", matrix[i][x]);
            // Calculate the sum of the first diagonal
            if (i == x) {
                first_Diagonal += matrix[i][x];
            }
            // Calculate the sum of the second diagonal
            if (x == rows - i - 1) {
                second_Diagonal += matrix[i][x];
            }
        }
        printf("\n");
    }

    // Output the absolute difference
    printf("The Absolute Difference is %d\n", first_Diagonal - second_Diagonal);

    return 0;
}
