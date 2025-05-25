#include<stdio.h>
#include<math.h>
#define E 0.001
#define F(x)  x*x*x-2*x-5
int main()
{
	printf("The equation is : x^3-2x-5 = 0 \n");
	printf("Let's evaluate root with precision 0.001\n\n");
    float x1,x2,x0,f1,f2,f0,r;
    printf("Enter initial guesses\n");
    scanf("%f%f",&x1,&x2);
    f1 = F(x1);
    f2 = F(x2);
    if(f1*f2>0)
        printf("Initial guesses do not bracket roots\n");
    else
    {
        while(1)
        {
            x0 = (x1+x2)/2;
            f0 = F(x0);
            if(f1*f0<0)
            { x2 = x0; f2 = f0; }
            else
            { x1 = x0; f1 = f0; }
            if(fabs(x2-x1)<E)
            { r = x2; break; }
        }
        printf("The root = %0.04f\n",r);
        printf("f(%0.04f) = %0.04f\n",r,F(r));
        printf("Name: Aaditya lamichhane\n");
        printf("File No: 1\n");
    }
    return 0;
}
