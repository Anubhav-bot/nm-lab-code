#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
		printf("Find f'(9) from following table :\n");
	printf("_____________________________________\n");
	printf("|  x |  5  |  6  |  7 |  8   |  9   |\n");
	printf("-------------------------------------\n");
	printf("|f(x)| 10  |14.5 |19.5|25.5  | 32   |\n");
	printf("-------------------------------------\n");
    int n, i, j, k;
    float x[10], fx[10], bd[10], xp, h, s, val = 0, term1, term2, prev;

    printf("Enter the number of points: ");
    scanf("%d", &n);

    printf("Enter the values of x and f(x):\n");
    for (i = 0; i < n; i++) {
        scanf("%f %f", &x[i], &fx[i]);
    }

    printf("Enter the value at which the derivative is needed: ");
    scanf("%f", &xp);

    h = x[1] - x[0]; // Assumes equally spaced data
    s = (xp - x[n - 1]) / h; // Distance from the last x-point

    // Initialize backward differences
    for (i = 0; i < n; i++) {
        bd[i] = fx[i];
    }

    // Compute backward differences
    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            bd[j] = bd[j + 1] - bd[j];
        }
    }

    // Compute the first derivative
    val = bd[n - 2];
    prev = 1;
    for (i = 2; i < n; i++) {
        term1 = 1;
        for (k = 2; k <= i; k++) {
            term1 *= (s + k - 2);
        }
        term2 = (s + i - 1) * prev;
        prev = term1 + term2;
        val += (bd[n - i - 1] * (term1 + term2)) / factorial(i);
    }
    val /= h;

    printf("Value of the first derivative = %.4f\n", val);
    printf("Done By Biraj Dulal\n");
    printf("File No: 16\n");
    return 0;
}

