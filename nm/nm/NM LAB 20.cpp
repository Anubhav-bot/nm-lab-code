#include <stdio.h>
#define f(x) (3 * (x) * (x) + 2 * (x) - 5) // Define the function

int main() {
	printf("Intrgrating function F(x)=3x^2 + 2x -5 \n");
    float x0, x1, x2, f0, f1, f2, h, result;

    // Input lower and upper limits
    printf("Enter the lower limit: ");
    scanf("%f", &x0);
    printf("Enter the upper limit: ");
    scanf("%f", &x2);

    h = (x2 - x0) / 2;    // Calculate step size
    x1 = x0 + h;          // Midpoint

    // Calculate function values at the limits and midpoint
    f0 = f(x0);
    f1 = f(x1);
    f2 = f(x2);

    // Apply Simpson's 1/3 Rule
    result = (f0 + 4 * f1 + f2) * h / 3;

    // Print the result
    printf("The value of the integration = %.4f\n", result);
    printf("Done By Biraj Dulal\n");
    printf("File No: 20\n");
    return 0;
}

