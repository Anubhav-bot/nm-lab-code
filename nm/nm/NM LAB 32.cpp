#include<stdio.h>
#include<math.h>
#define f(x,y) 2*(y)/(x)
int main()
{
	printf("Function is : f(x,y)=2y/x\n");
	float x,x0,xp,y0,y,h,m1,m2;
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
		m1=f(x,y);
		m2=f(x+h,y+h*m1);
		y=y+h/2*(m1+m2);
	}
	printf("Function value at x=%f is %f\n",xp,y);
	printf("Done By Biraj Dulal\n");
	printf("file no 32");
	return 0;
}
