#include<stdio.h>
#include<conio.h>

float a[100], b[100];

int main() {
    float x;
    int n, i;
printf("Lets evaluate for polynomial 3x^3 - 4x^2 + 5x - 6 at x=2 \n\n");
    printf("Enter degree of polynomial : ");
    scanf("%d", &n);

    printf("Enter coefficients of polynomial : ");
    for(i = n; i >= 0; i--)
        scanf("%f", &a[i]);

    printf("Enter the value at which polynomial is to be evaluated :");
    scanf("%f", &x);

    b[n] = a[n];
    while(n > 0) {
        b[n - 1] = a[n - 1] + b[n] * x;
        n--;
    }

    printf("Value of polynomial P(%f) = %f", x, b[0]);
    printf("Name: Aaditya lamichhane\n");
    printf("File No: 5\n");
    return 0;
}

