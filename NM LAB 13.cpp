#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	 printf("Here we will fit the dataset :\n");
    // printf(" _________________________________\n");
    // printf("| x   | 0    |   1  |   3  |   5  |\n");
    // printf("|-----|------|------|------|------|\n");
    // printf("| y   |  1   |0.891 |0.708 |0.562 |\n");
    // printf(" ---------------------------------\n\n");
	int n,i,j,k;
	float a=0,b=0,r, x[10],y[10],sx, slogy=0, sxy=0, sx2=0;
	printf("Enter number of points : ");
	scanf("%d",&n);
	printf("Enter the value of x and f(x) :\n");
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		sx = sx+x[i];
		slogy = slogy+log(y[i]);
		sxy = sxy+x[i]*log(y[i]);
		sx2 = sx2+x[i]*x[i];
	}
	b = ((n*sxy)-(sx*slogy))/((n*sx2)-(sx*sx));
	r = (slogy/n)-(b*sx/n);
	a =  exp(r);
	printf("Fitted Curve is y = %fe^%fx",a,b);
	printf("Name: Aaditya lamichhane\n");
	printf("File No: 13\n");
	return 0;
}

