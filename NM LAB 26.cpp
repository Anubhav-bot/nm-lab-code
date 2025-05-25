#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, k;
    float sum = 0, a[10][10], u[10][10], l[10][10];

    printf("Enter Dimension of the Matrix :");
    scanf("%d", &n);

    printf("Enter Elements of the Matrix\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    // Initialize L and U matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            l[i][j] = 0;
            u[i][j] = 0;
        }
    }

    // Compute elements of L and U matrices
    for (j = 0; j < n; j++) {
        u[0][j] = a[0][j]; // First row of U
    }
    for (i = 0; i < n; i++) {
        l[i][i] = 1; // Diagonal elements of L
    }
    for (i = 1; i < n; i++) {
        l[i][0] = a[i][0] / u[0][0]; // First column of L
    }

    for (j = 1; j < n; j++) {
        for (i = 1; i <= j; i++) {
            sum = 0;
            for (k = 0; k <= i - 1; k++) {
                sum += l[i][k] * u[k][j];
            }
            u[i][j] = a[i][j] - sum;
        }
        for (i = j + 1; i < n; i++) {
            sum = 0;
            for (k = 0; k <= j - 1; k++) {
                sum += l[i][k] * u[k][j];
            }
            l[i][j] = (a[i][j] - sum) / u[j][j];
        }
    }

    // Print L matrix
    printf("********** L Matrix **********\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\t%.3f", l[i][j]);
        }
        printf("\n");
    }

    // Print U matrix
    printf("********** U Matrix **********\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\t%.3f", u[i][j]);
        }
        printf("\n");
    }

    printf("Name: Aaditya lamichhane\n");
    printf("File No: 26\n");
    return 0;
}



//do for the matrix
//3x+2y+z=10
//2x+2y+2z=14
//x+2y+3z=14
