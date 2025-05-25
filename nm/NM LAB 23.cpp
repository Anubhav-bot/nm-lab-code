#include<stdio.h>
#include<math.h>
#define f(x) 1/(x)
int main()
{
	printf(" Integrating 1/x \n");
	float a,b,t[10][10],h,sm,sl,x;
	int i,k,c,r,m,p,q;
	printf("Enter Lower & Upper Limit : ");
	scanf("%f %f",&a,&b);
	printf("Enter p & q of required T(p,q) :");
	scanf("%d %d",&p,&q);
	h=b-a;
	t[0][0]=h/2*((f(a))+(f(b)));
	for(i=1;i<=p;i++)
	{
		sl=pow(2,i-1);
		sm=0;
		for(k=1;k<=sl;k++)
		{
			x=a+(2*k-1)*h/pow(2,i);
			sm=sm+(f(x));
		}
		t[i][0]=t[i-1][0]/2+sm*h/pow(2,i);
	}
	for(c=1;c<=p;c++)
	{
		for(k=1;k<=c&&k<=q;k++)
		{
			m=c-k;
			t[m+k][k]=(pow(4,k)*t[m+k][k-1]-t[m+k-1][k-1])/(pow(4,k)-1);
		}
	}
	printf("\n value of integration=%.4f",t[p][q]);
	printf("Name: Aaditya lamichhane\n");
	printf("File No: 23\n");
	return 0;
}
