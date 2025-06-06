#include<stdio.h>
#include<conio.h>
#include<math.h>
/* Arranging given system of linear
   equations in diagonally dominant
   form:
   20x + y - 2z = 17
   3x + 20y -z = -18
   2x - 3y + 20z = 25
*/
/* Equations:
   x = (17-y+2z)/20
   y = (-18-3x+z)/20
   z = (25-2x+3y)/20
*/
/* Defining function */
#define f1(x,y,z)  (17-y+2*z)/20
#define f2(x,y,z)  (-18-3*x+z)/20
#define f3(x,y,z)  (25-2*x+3*y)/20
int main()
{
 printf("Solving system of equations :\n");
 printf("20x + y - 2z = 17\n3x + 20y -z = -18\n2x - 3y + 20z = 25\n");
 printf("Required equations are :\n");
 printf("x = (17-y+2z)/20\ny = (-18-3x+z)/20\nz = (25-2x+3y)/20\n\n");
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int count=1; 
 printf("Enter tolerable error : ");
 scanf("%f", &e);
 printf("\nCount\tx\ty\tz\n");
 do
 {  
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
  printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);  
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);
  count++;  
  x0 = x1;
  y0 = y1;
  z0 = z1;
 }while(e1>e && e2>e && e3>e);
 printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);
 printf("Name: Aaditya lamichhane\n");
 printf("File No: 27\n");
 return 0;
}

