#include<stdio.h>
#include<conio.h>
int main()
{
	printf("                   ______________________ \n");
	printf("//We are doing for| x   | 1  |  3  |  5  |   and finding value at f(3.5) .\n");
	printf("                  |-----|----|-----|-----| \n");
	printf("                  | f(x)| 3  | 13  |  31 |\n");
	printf("                  ------------------------\n");
	 float x[100], y[100], xp, yp=0, p;
	 int i,j,n;	 
	 printf("Enter number of data: ");
	 scanf("%d", &n);
	 printf("Enter data:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
	 }
	 printf("Enter interpolation point: ");
	 scanf("%f", &xp);	 
	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	 printf("Interpolated value at %.3f is %.3f.", xp, yp);
	 printf("Done By Biraj Dulal\n");
	 printf("File No: 8\n");
	 return 0;
}

