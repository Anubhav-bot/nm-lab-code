#include <stdio.h>

int main() {
		printf("Find f'(10) from following table :\n");
	printf("_______________________________________\n");
	printf("|  x |  3  |  5  |  11 |  27   |  34   |\n");
	printf("---------------------------------------\n");
	printf("|f(x)| -13 | 23  |  899| 17315 |35606  |\n");
	printf("----------------------------------------\n");
    int n, i;
    float x[10], fx[10], xp, h, derivative;
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    printf("Enter the values of x and f(x):\n");
    for (i = 0; i < n; i++) {
        scanf("%f %f", &x[i], &fx[i]);
    }

    printf("Enter the value at which the derivative is needed: ");
    scanf("%f", &xp);

    // Finding index of xp in x[]
    int index = -1;
    for (i = 1; i < n - 1; i++) {
        if (xp >= x[i - 1] && xp <= x[i + 1]) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Error: xp is out of range for central difference formula.\n");
        return 1;
    }

    // Assuming equally spaced points
    h = x[1] - x[0];

    // Central difference formula
    derivative = (fx[index + 1] - fx[index - 1]) / (2 * h);

    printf("Value of the first derivative at x = %.4f is %.4f\n", xp, derivative);

    printf("Name: Aaditya lamichhane\n");
    printf("File No: 17\n");
    return 0;
}

