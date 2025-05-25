#include <stdio.h>
#define F(x) ((x) * (x) * (x) + 3) // Define the function

int main() {
	printf("Integrating function F(x)= x^3+3 \n");
    float x0, x1, h, f0, f1, v;

    // Input upper and lower limits
    printf("Enter lower limit and upper limit: ");
    scanf("%f %f", &x0, &x1);

    h = x1 - x0;        // Calculate step size
    f0 = F(x0);         // Calculate function value at lower limit
    f1 = F(x1);         // Calculate function value at upper limit

    v = h * (f0 + f1) / 2; // Apply Trapezoidal Rule

    printf("The value of integration = %.4f\n", v);
    printf("Done By Biraj Dulal\n");
    printf("File No: 19\n");
    return 0;
}

