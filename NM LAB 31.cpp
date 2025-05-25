#include<stdio.h>
#include<math.h>
#define f(x,y) 2*y/x
int main()
{
	printf("Function : f(x,y)= 2x/y \n");
	float x,x0,xp,y0,y,h;
	printf("Enter initial values of x and y :");
	scanf("%f %f",&x0,&y0);
	printf("Enter x at which function to be Evaluated :");
	scanf("%f",&xp);
	printf("Enter the step size :");
	scanf("%f",&h);
	y=y0;
	x=x0;
	for(x=x0;x<xp;x=x+h)
	{
		y=y+f(x,y)*h;
	}
	printf("Function value at x=%f is %f\n",xp,y);
	printf("Done by biraj Dulal");
	printf("31");
	return 0;
}
