#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
	if(n<=1)
	return 1;
	else
	return n*factorial(n-1);
}
int main()
{ 
    printf("Here we will be finding f(1975) from :\n");
    printf(" _________________________________\n");
    printf("| x   | 1974 | 1976 | 1978 | 1980 |\n");
    printf("|-----|------|------|------|------|\n");
    printf("| f(x)|40    |  43  |  48  | 52   |\n");
    printf(" ---------------------------------\n\n");
	int n,i,j,k;
	float v=0, p, xp,x[10],fx[10], fd[10], h, s;
	printf ("Enter number of points : ");
	scanf ("%d",&n);
	printf ("Enter interpolation point : ");
	scanf ("%f",&xp);
	printf ("Enter the value of x and f(x) :\n");
	for(i=0;i<n;i++)
	{
		scanf ("%f%f",&x[i],&fx[i]);
		
	}
	h = x[1]-x[0];
	s = (xp-x[0])/h;
	for(i=0;i<n;i++)
	{
		fd[i]=fx[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			fd[j]=(fd[j]-fd[j-1]);
		}
	}
	v = fd[0];
	for(i=1;i<n;i++)
	{
		p=1;
		for(k=1;k<=i;k++)
		{
			p = p*(s-k+1);
		}
		v = v+(fd[i]*p)/factorial(i);
	} 
	printf ("Interpolation value = %f",v);
	
	printf("Done By Aaditya lamichhane\n");
	printf("File No: 10\n");
	return 0;
}

