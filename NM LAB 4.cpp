#include <stdio.h>
#include <math.h>

#define E 0.0001  

float a[20], q[20];  

float F(float x, int n) {
    float sum = 0;
    for (int i = n; i >= 0; i--) {
        sum += a[i] * pow(x, i);
    }
    return sum;
}

float FD(float x, int n) {
    float sum = 0;
    for (int i = n; i > 0; i--) {
        sum += i * a[i] * pow(x, i - 1);
    }
    return sum;
}

int main() {
    printf(" x^3 + x^2 - 1 = 0 \n\n");
    float x0, xr, fx0, fdx0, Er, c;
    int i, n, m;

    printf("Enter degree of polynomial: ");
    scanf("%d", &n);

    printf("Enter coefficients of the polynomial: ");
    for (i = n; i >= 0; i--) {
        scanf("%f", &a[i]);
    }

    printf("Enter initial guess: ");
    scanf("%f", &x0);

    while (n > 1) {
        while (1) {
            fx0 = F(x0, n);
            fdx0 = FD(x0, n);

            if (fdx0 == 0) {
                x0 += 1;
                continue;
            }

            xr = x0 - fx0 / fdx0;
            Er = fabs((xr - x0) / xr);

            if (Er < E) {
                printf("Root %d = %f\n", n, xr);
                break;
            }

            x0 = xr;
        }

        c = xr;
        q[n - 1] = a[n];
        for (m = n - 1; m > 0; m--) {
            q[m - 1] = a[m] + q[m] * c;
        }

        for (i = n - 1; i >= 0; i--) {
            a[i] = q[i];
        }

        n--;
        x0 = xr;
    }

    xr = -a[0] / a[1];
    printf("Root 1 = %f\n", xr);

    printf("Name: Aaditya lamichhane\n");
    printf("File No: 4\n");
    return 0;
}

