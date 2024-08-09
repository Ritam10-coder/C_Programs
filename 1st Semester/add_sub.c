#include <stdio.h>
int main() 
{
    int m1[10][10], m2[10][10], r[10][10];
    int rows, columns,i,j;

    printf("Enter number of rows and columns for matrices: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; ++i) {
        for ( j = 0; j < columns; ++j) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < columns; ++j) {
            scanf("%d", &m2[i][j]);
        }
    }

    printf("\nSum of matrices:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < columns; ++j) {
            r[i][j] = m1[i][j] + m2[i][j];
            printf("%d\t", r[i][j]);
        }
        printf("\n");
    }
    printf("\nDifference of matrices:\n");
    for (i = 0; i < rows; ++i) {
        for ( j = 0; j < columns; ++j) {
            r[i][j] = m1[i][j] - m2[i][j];
            printf("%d\t", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}
