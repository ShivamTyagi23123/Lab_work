// Q71: Read and print a matrix

#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int matrix[r][c];

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}

// Q72: Find sum of all elements in a matrix

#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    scanf("%d %d", &r, &c);
    int matrix[r][c];

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    printf("%d\n", sum);
    return 0;
}
