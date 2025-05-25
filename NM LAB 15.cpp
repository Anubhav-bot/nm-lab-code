#include <stdio.h>

// Function to compute factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    printf("Find f'(12) from the following table:\n");
    printf("_______________________________________\n");
    printf("|  x |  3  |  5  |  11 |  27   |  34   |\n");
    printf("---------------------------------------\n");
    printf("|f(x)| -13 | 23  |  899| 17315 |35606  |\n");
    printf("----------------------------------------\n");

    int n, i, j;
    float x[10], fx[10], fd[10][10], xp, h, s, val = 0, term;

    printf("Enter the number of points: ");
    scanf("%d", &n);

    printf("Enter the values of x and f(x):\n");
    for (i = 0; i < n; i++) {
        scanf("%f %f", &x[i], &fx[i]);
    }

    printf("Enter the value at which derivative is needed: ");
    scanf("%f", &xp);

    // Calculate step size based on the first two points
    h = x[1] - x[0]; // Assuming equally spaced data for simplicity

    // Initialize first column with function values
    for (i = 0; i < n; i++) {
        fd[i][0] = fx[i];
    }

    // Compute forward difference table
    for (j = 1; j < n; j++) {  
        for (i = 0; i < n - j; i++) {
            fd[i][j] = fd[i + 1][j - 1] - fd[i][j - 1];
        }
    }

    // Compute the relative position of xp from x[0]
    s = (xp - x[0]) / h; // Relative position of xp from x[0]

    // Compute first derivative using forward difference formula
    val = fd[0][1] / h; // First-order term
    term = 1;

    for (i = 2; i < n; i++) {
        term *= (s - (i - 1)); // Compute product term for each order
        val += (fd[0][i] * term) / (factorial(i) * h); // Use factorial(i)
    }

    printf("Value of first derivative at x = %.2f is %.4f\n", xp, val);
    printf("\nName: Aaditya lamichhane\n");
    printf("File No: 15\n");
    return 0;
}
