//linear algebraic equations using Gauss SeidelWrite a program to find a solution of linear algebraic equations using Gauss Seidel Method.
//    Algorithm:
//1.	Start
//2.	 Arrange given system of linear equations in    diagonally dominant form
//3.	  Read tolerable error (e)
//4.	  Convert the first equation in terms of first variable,  second equation in    terms of      second variable and so on. 
//5.	  Set initial guesses for x0,  y0, z0 and so on
//6.	  Substitute value of y0, z0 ... from step 5 in   first equation obtained from step 4 to  calculate  new value of x1. Use x1, z0, u0 .... in second equation obtained from step 4 to caluclate new value of y1. Similarly, use x1, y1, u0... to find new z1 and so on.  
//7.	If| x0 - x1| > e and | y0 - y1| > e and | z0 - z1|  > e    and so on then goto step 9
//8.	Set x0=x1, y0=y1, z0=z1 and so on and goto step 6
//9.	Print value of x1, y1, z1 and so on
//10.	Stop

#include<stdio.h>
#include<conio.h>
#include<math.h>
/* Defining function */
#define f1(x,y,z)  (17-y+2*z)/20
#define f2(x,y,z)  (-18-3*x+z)/20
#define f3(x,y,z)  (25+2*x+3*y)/20

/* Main function */
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int count=1;
 
 printf("Enter tolerable error:\n");
 scanf("%f", &e);

 printf("\nCount\tx\ty\tz\n");
 do
 {
  /* Calculation */
  x1 = f1(x0,y0,z0);
  y1 = f2(x1,y0,z0);
  z1 = f3(x1,y1,z0);
  printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

  /* Error */
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  count++;

  /* Set value for next iteration */
  x0 = x1;
  y0 = y1;
  z0 = z1;

 }while(e1>e && e2>e && e3>e);

 printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);

 getch();
}
//Output
//Enter tolerable error:
//0.0001
//Count   x       y       z
//1       0.8500  -1.0275 1.1809
//2       1.0195  -0.9939 1.2029
//3       1.0200  -0.9929 1.2031
//4       1.0199  -0.9928 1.2031
//Solution: x=1.020, y=-0.993 and z = 1.203

