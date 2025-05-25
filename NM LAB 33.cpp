#include<stdio.h>
#include<math.h>
#define f(x,y) 2*x+y
int main()
{
	printf(" Function : f(x,y)=2x+y\n");
	float x,x0,xp,y0,y,h,m1,m2,m3,m4;
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
		m2=f(x+1/2.0*h,y+1/2.0*h*m1);
		m3=f(x+1/2.0*h,y+1/2.0*h*m2);
		m4=f(x+h,y+h*m3);
		y=y+h/6*(m1+2*m2+2*m3+m4);
	}
	printf("Function value at x=%f is %f\n",xp,y);
	printf("Done by biraj Dulal");
	printf("33");
	return 0;
}
