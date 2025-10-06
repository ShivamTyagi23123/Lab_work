// Q73: Sum of each row in a matrix and store in an array

#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int matrix[r][c], sum[r];

    for(i = 0; i < r; i++) {
        sum[i] = 0;
        for(j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            sum[i] += matrix[i][j];
        }
    }

    for(i = 0; i < r; i++)
        printf("%d ", sum[i]);
    printf("\n");
    return 0;
}

// Q74: Find transpose of a matrix

#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int matrix[r][c], trans[c][r];

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            trans[j][i] = matrix[i][j];

    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}
