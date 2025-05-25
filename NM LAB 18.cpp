#include <stdio.h>
int main() {
		printf("Find f'(10) from following table :\n");
	printf("_______________________________________\n");
	printf("|  x |  3  |  5  |  11 |  27   |  34   |\n");
	printf("---------------------------------------\n");
	printf("|f(x)| -13 | 23  |  899| 17315 |35606  |\n");
	printf("----------------------------------------\n");
    int n, i, j;
    float x[10], y[10][10], xp, result, term;
    // Taking number of data points
    printf("Enter number of data points: ");
    scanf("%d", &n);
    // Taking x and y values
    printf("Enter the values of x and f(x): \n");
    for (i = 0; i < n; i++) {
        scanf("%f %f", &x[i],&y[i][0]);
    }
    // Constructing the divided difference table
    for (j = 1; j < n; j++) {
        for (i = 0; i < n - j; i++) {
            y[i][j] = (y[i+1][j-1] - y[i][j-1]) / (x[i+j] - x[i]);
        }
    }
    // Taking the x value where derivative is required
    printf("Enter the value of x where derivative is required: ");
    scanf("%f", &xp);
    // Computing derivative using Newton's divided difference polynomial
    result = y[0][1]; // First-order derivative starts with f[x0, x1]
    term = 1.0;

    for (i = 1; i < n - 1; i++) {
        term *= (xp - x[i - 1]);
        result += y[0][i + 1] * term;
    }
    // Output result
    printf("The approximate derivative at x = %.4f is: %.4f\n", xp, result);
    printf("Done By Biraj Dulal\n");
    printf("File No: 18\n");
    return 0;
}

