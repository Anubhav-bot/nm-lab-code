#include<stdio.h>
#include<math.h>

#define E 0.001
#define F(x) ((x) * (x) - 2 * (x) - 1)

int main() {
    printf("Equation is: x^2 - 2x - 1 = 0\n");
    printf("Let's calculate the root with precision 0.001.\n\n");

    float x1, x2, x3, f1, f2, r;
    printf("Enter initial guesses: ");
    scanf("%f%f", &x1, &x2);

    while (1) {
        f1 = F(x1);
        f2 = F(x2);
        x3 = x2 - (f2 * (x2 - x1)) / (f2 - f1);
        
        if (fabs((x3 - x2) / x3) < E) {
            r = x3;
            break;
        } else {
            x1 = x2;
            x2 = x3;
        }
    }

    printf("The root = %0.4f\n", r);
    printf("f(%0.4f) = %0.4f\n", r, F(r));

    printf("Name: Aaditya lamichhane\n");
    printf("File No: 3\n");
    return 0;
}

