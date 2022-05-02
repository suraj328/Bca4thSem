//Write a program to to calculate an approximate value of y using the  Euler's algorithm
//Algorithm:
//	Step 1. Start;
//Step 2. Input function f(x, y);
//Step 3. Read x0, y0, xn, h;
///* x0, y0 are initial values and xn is the last value of x
//   where the process will terminate, h is the step size */
//Step 4. for x = x0 to xn step h do
//		y = y0 + h * f(x, y0);
//		Print x, y;
//		y0 = y;
//		endfor;
//Step 5. Stop;
//Step 6. Display Result.
//Step 7. Stop

#include<stdio.h>
#include<conio.h>
#define f(x,y) 3*x*x+1
int main()
{
 float x0, y0, xn, h, yn, slope;
 int i, n;
 printf("Enter Initial Condition\n");
 printf("x0 = ");
 scanf("%f", &x0);
 printf("y0 = ");
 scanf("%f", &y0);
 printf("Enter calculation point xn = ");
 scanf("%f", &xn);
 printf("Enter number of steps: ");
 scanf("%d", &n);
 /* Calculating step size (h) */
 h = (xn-x0)/n;
 /* Euler's Method */
 printf("\nx0\ty0\tslope\tyn\n");
 printf("------------------------------\n");
 for(i=0; i < n; i++)
 {
  slope = f(x0, y0);
  yn = y0 + h * slope;
  printf("%.4f\t%.4f\t%0.4f\t%.4f\n",x0,y0,slope,yn);
  y0 = yn;
  x0 = x0+h;
 }
 /* Displaying result */
 printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);
 getch();
 return 0;
}
//Output:
//Enter Initial Condition
//x0 = 1
//y0 = 2
//Enter calculation point xn = 2
//Enter number of steps: 4
//
//x0      y0      slope   yn
//------------------------------
//1.0000  2.0000  4.0000  3.0000
//1.2500  3.0000  5.6875  4.4219
//1.5000  4.4219  7.7500  6.3594
//1.7500  6.3594  10.1875 8.9063
//
//Value of y at x = 2.00 is 8.906

