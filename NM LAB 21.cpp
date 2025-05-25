#include <stdio.h>
#define f(x) (x)*(x)*(x)+1 // Define the function
int main() {
	printf("Integrating function: F(x)= x^3 + 1 \n");
    float x0, x1, x2,x3, f0, f1, f2,f3, h,v;
    printf("Enter the lower limit: ");
    scanf("%f", &x0);
    printf("Enter the upper limit: ");
    scanf("%f", &x3);
    h = (x3 - x0) / 3;    // Calculate step size
    x1 = x0 + h; 
	x2=x0+2*h;         // Midpoint
    f0 = f(x0);
    f1 = f(x1);
    f2 = f(x2);
    f3 = f(x3);
    v=3/8.0*h*(f0+3*f1+3*f2+f3);
    printf("The value of the integration = %.4f\n",v);
    printf("Name: Aaditya lamichhane\n");
    printf("File No: 21\n");
    return 0;
}
