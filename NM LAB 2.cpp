#include<stdio.h>
#include<math.h>
#define F(x) x*x*x-2*x-5
#define D(x) 3*x*x-2
#define E 0.01
int main()
{
    float x0,x1,f1,f2,r;
    printf("We are doing for equation : x^3 - 2X -5 = 0, with precision 0.01. \n\n");
    printf("Enter initial guess :\n");
    scanf("%f",&x0);
    while(1)
    {
        f1 = F(x0);
        f2 = D(x0);
        x1 = x0 - f1/f2;
        if(fabs(x1-x0)/x1 < E)
        { r = x1; break; }
        x0 = x1;
    }
    printf("The root = %0.3f\n",r);
    printf("Name: Aaditya lamichhane\n");
    printf("File No: 2\n");
    return 0;
}
