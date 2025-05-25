#include<stdio.h>
#include<conio.h>
int main()
{
	printf("                   ______________________ \n");
	printf("  We are doing for| x   | 1  |  3  |  5  |   and finding value at f(3.5) .\n");
	printf("                  |-----|----|-----|-----| \n");
	printf("                  | f(x)| 3  | 13  |  31 |\n");
	printf("                  ------------------------\n");
	int n,i,j;
	float v=0,p,xv,x[10],fx[10],a[10];
	printf("Enter number of points : ");
	scanf("%d",&n);
	printf("Enter interpolation point : ");
	scanf("%f",&xv);
	printf("Enter all the values of x and fx :\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%f%f",&x[i],&fx[i]);
	}
	for(i=0;i<n;i++)
	a[i] = fx[i];
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			a[j]=(a[j]-a[j-1])/(x[j]-x[j-1-i]);
		}
	}
	v=0;
	for(i=0;i<n;i++)
	{
		p=1;
		for(j=0;j<=i-1;j++)
		p = p*(xv-x[j]);
		v = v+a[i]*p;
	}
	printf("Interpolation value = %f",v);
	printf("Done By Aaditya lamichhane\n");
	printf("File No: 9\n");
	return 0;
}

