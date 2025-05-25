#include <stdio.h>
#define f(x) (x)*(x)*(x)+1 // Define the function
int main() {
	printf("Integrating function : F(x)=x^3 + 1 \n");
    float a, b,z1,z2,c1,c2,x1,x2,v;
    printf("Enter the lower limit: ");
    scanf("%f", &a);
    printf("Enter the upper limit: ");
    scanf("%f", &b);
    c1=c2=1;
    z1=-0.57735,z2=0.57735;
    x1=(b-a)/2*z1+(b+a)/2;
    x2=(b-a)/2*z2+(b+a)/2;
    v=(b-a)/2*((f(x1))+(f(x2)));
    printf("The value of the integration = %.4f\n",v);
    printf("Name: Aaditya lamichhane\n");
    printf("File No: 22\n");
    return 0;
}
