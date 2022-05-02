//Write a program to find a solution of linear algebraic equations using Jacobi method.
//Algorithm:
//1.	Start
//2.	Arrange given system of linear equations in diagonally dominant form
//3.	Read tolerable error (e)
//4.	Convert the first equation in terms of first variable, second equation in terms of second variable and so on. 
//5.	Set initial guesses for x0, y0, z0 and so on
//6.	Substitute value of x0, y0, z0 ... from step 5 in equation obtained in  step 4 to calculate new values  x1, y1, z1 and so on
//7.	If| x0 - x1| > e and | y0 - y1| > e and | z0 - z1| > e  and so on then goto step 9
//8.	Set x0=x1, y0=y1, z0=z1 and so on and goto step 6
//9.	Print value of x1, y1, z1 and so on
//10.	Stop

#include<stdio.h>
#include<conio.h>
#include<math.h>


/* Defining function */
#define f1(x,y,z)  (11+2*y-z)/6
#define f2(x,y,z)  (5+2*x-2*z)/7
#define f3(x,y,z)  (x+2*y+1)/5

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
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
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
 return 0;
}
//Output
//Enter tolerable error:
//0.1
//Count   x       y       z
//1       1.8333  0.7143  0.2000
//2       2.0381  1.1810  0.8524
//3       2.0849  1.0531  1.0800
//Solution: x=2.085, y=1.053 and z = 1.080

