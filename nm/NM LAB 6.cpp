#include <stdio.h>
#include <math.h>

int main() {
	printf("Let's divide (x^4 -3x+5) by (X-4) \n\n");
    int a[30], b[30];
    int i, n, c, remainder;

    printf("Enter degree of polynomial: ");
    scanf("%d", &n);

    printf("Enter coefficients of the dividend polynomial: ");
    for (i = n; i >= 0; i--) {
        scanf("%d", &a[i]);
    }

    printf("Enter the constant term of divisor polynomial (x - c): ");
    scanf("%d", &c);

    b[n] = 0;
    for (i = n; i > 0; i--) {
        b[i - 1] = a[i] + b[i] * c;
    }

    remainder = a[0] + b[0] * c;

    printf("Quotient: ");
    int first = 1;
    for (i = n - 1; i >= 0; i--) {
        if (!first) {
            printf(" %c %d", (b[i] >= 0) ? '+' : '-', abs(b[i]));
        } else {
            printf("%d", b[i]);
            first = 0;
        }
        if (i > 1) printf("x^%d", i);
        else if (i == 1) printf("x");
    }

    printf("\nRemainder: %d\n", remainder);

    printf("Name: Aaditya lamichhane\n");
    printf("File No: 6\n");
    return 0;
}

