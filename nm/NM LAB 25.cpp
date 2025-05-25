// C Program for Matrix Inversion by using Gauss-Jordan Method
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int n, i, j, k, p, q;
    float pivot, term, a[10][10];

    // Input the dimension of the system of equations
    printf("Enter Dimension of System of equations : ");
    scanf("%d", &n);

    // Input the coefficients matrix
    printf("Enter coefficients Matrix : \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    // Augment the matrix with the identity matrix
    for (i = 0; i < n; i++) {
        for (j = n; j < 2 * n; j++) {
            if (j == n + i) {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
        }
    }

   for(k=0;k<n;k++){ // Inverse computation to follow...
pivot = a[k][k];
for (p = 0; p < 2 * n; p++)
    a[k][p] = a[k][p] / pivot;
}
for (i = 0; i < n; i++) {
    term = a[i][k];
    if (k != i) {
        for (j = 0; j < 2 * n; j++) {
            a[i][j] = a[i][j] - a[k][j] * term;
        }
    }
}

printf("Matrix Inverse is:\n");
for (i = 0; i < n; i++) { // Display Inverse Matrix
    for (j = n; j < 2 * n; j++)
        printf("%0.2f\t", a[i][j]);
    printf("\n");
}

printf("Name: Aaditya lamichhane\n");
printf("File No: 25\n");
return 0;
}


//HERE SIMPLY CAlculate inverse of matrix of dimension 3 like
//3  5  7
//5  3  8
//5  2  0
