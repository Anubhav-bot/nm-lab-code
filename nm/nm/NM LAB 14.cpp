#include <stdio.h>
#include <math.h>

int main() {
	printf("Here we will fit 2nd degree polynomial to following dataset :\n");
    printf(" _________________________________\n");
    printf("| x   | 2    |   4  |   6  |   8  |\n");
    printf("|-----|------|------|------|------|\n");
    printf("| y   | 1.4  |  2   | 2.4  | 2.6  |\n");
    printf(" ---------------------------------\n\n");
    int i, j, k, n, m;
    float a[20][20], b[20], z[20], x[20], fx[20];
    float sum, pivot, term;

    // Input the number of data points
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    // Input the degree of the polynomial
    printf("Enter the degree of the polynomial to be fitted: ");
    scanf("%d", &m);

    if (m >= n) {
        printf("Degree must be less than the number of data points.\n");
        return 1;
    }

    // Input data points
    printf("Enter data points, x and f(x):\n");
    for (i = 0; i < n; i++) {
        scanf("%f %f", &x[i], &fx[i]);
    }

    // Construction of coefficient matrix
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= m; j++) {
            sum = 0;
            for (k = 0; k < n; k++) {
                sum += pow(x[k], i + j);
            }
            a[i][j] = sum;
        }
        // Construction of RHS vector
        sum = 0;
        for (k = 0; k < n; k++) {
            sum += fx[k] * pow(x[k], i);
        }
        b[i] = sum;
    }

    // Forward Elimination
    for (k = 0; k <= m; k++) {
        pivot = a[k][k];
        if (fabs(pivot) < 1e-6) {
            printf("Method failed: Near-zero pivot encountered.\n");
            return 1;
        }

        for (i = k + 1; i <= m; i++) {
            term = a[i][k] / pivot;
            for (j = k; j <= m; j++) {
                a[i][j] -= a[k][j] * term;
            }
            b[i] -= b[k] * term;
        }
    }

    // Back Substitution
    z[m] = b[m] / a[m][m];
    for (i = m - 1; i >= 0; i--) {
        sum = 0;
        for (j = i + 1; j <= m; j++) {
            sum += a[i][j] * z[j];
        }
        z[i] = (b[i] - sum) / a[i][i];
    }

    // Output regression polynomial
    printf("The polynomial regression model is:\n");
    printf("y = %.3f", z[0]);

    for (i = 1; i <= m; i++) {
        if (z[i] < 0) {
            printf(" - %.3fx^%d", fabs(z[i]), i); // Properly handle negative signs
        } else {
            printf(" + %.3fx^%d", z[i], i); // Properly handle positive signs
        }
    }
    printf("\nName: Aaditya lamichhane\n");
    printf("File No: 14\n");
    return 0;
}

