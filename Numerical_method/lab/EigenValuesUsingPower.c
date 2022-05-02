//Write a program to find Eigen values using Power method.
//     Algorithm:
//1.	Start
//2. Read Order of Matrix (n) and Tolerable Error (e)
//           3. Read Matrix A of Size n x n
//           4. Read Initial Guess Vector X of Size n x 1
//5. Initialize: Lambda_Old = 1
//6. Multiply: X_NEW = A * X 
//7. Replace X by X_NEW
//            8. Find Largest Element (Lamda_New) by Magnitude from X_NEW
//9. Normalize or Divide X by Lamda_New
//10. Display Lamda_New and X
//11. If |Lambda_Old - Lamda_New| > e then set Lambda_Old = Lamda_New and goto step (6) otherwise goto step (12)
//12. Stop

#include<stdio.h>
#include<conio.h>
#include<math.h>

#define SIZE 10

int main()
{
	 float a[SIZE][SIZE], x[SIZE],x_new[SIZE];
	 float temp, num_new, num_old, error;
	 int i,j,n, step=1;
	 /* Inputs */
	 printf("Enter Order of Matrix: ");
	 scanf("%d", &n);
	 printf("Enter Tolerable Error: ");
	 scanf("%f", &error);
	 /* Reading Matrix */
	 printf("Enter Coefficient of Matrix:\n");
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			   printf("a[%d][%d]=",i,j);
			   scanf("%f", &a[i][j]);
		  }
	 }
	 /* Reading Intial Guess Vector */
	 printf("Enter Initial Guess Vector:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d]=",i);
		  scanf("%f", &x[i]);
	 }
	 /* Initializing Lambda_Old */
	 num_old = 1;
	 /* Multiplication */
	 up:
	 for(i=1;i<=n;i++)
	 {
		  temp = 0.0;
		  for(j=1;j<=n;j++)
		  {
		   	temp = temp + a[i][j]*x[j];
		  }
		  x_new[i] = temp;
	 }
	 /* Replacing */
	 for(i=1;i<=n;i++)
	 {
	  	x[i] = x_new[i];
	 }
	 /* Finding Largest */
	 num_new = fabs(x[1]);
	 for(i=2;i<=n;i++)
	 {
		  if(fabs(x[i])>num_new)
		  {
		   	num_new = fabs(x[i]);
		  }
	 }
	 /* Normalization */
	 for(i=1;i<=n;i++)
	 {
	  	x[i] = x[i]/num_new;
	 }
	 /* Display */
	 printf("\n\nSTEP-%d:\n", step);
	 printf("Eigen Value = %f\n", num_new);
	 printf("Eigen Vector:\n");
	 for(i=1;i<=n;i++)
	 {
	  	printf("%f\t", x[i]);
	 }
	 /* Checking Accuracy */
	 if(fabs(num_new-num_old)>error)
	 {
		  num_old=num_new;
		  step++;
		  goto up;
	 }
	 getch();
}
//Output
//Enter Order of Matrix: 3
//Enter Tolerable Error: 0.1
//Enter Coefficient of Matrix:
//a[1][1]=1
//a[1][2]=2
//a[1][3]=0
//a[2][1]=2
//a[2][2]=1
//a[2][3]=0
//a[3][1]=0
//a[3][2]=0
//a[3][3]=-1
//Enter Initial Guess Vector:
//x[1]=0
//x[2]=1
//x[3]=0
//STEP-1:
//Eigen Value = 2.000000
//Eigen Vector:
//1.000000        0.500000        0.000000
//STEP-2:
//Eigen Value = 2.500000
//Eigen Vector:
//0.800000        1.000000        0.000000
//STEP-3:
//Eigen Value = 2.800000
//Eigen Vector:
//1.000000        0.928571        0.000000
//STEP-4:
//Eigen Value = 2.928571
//Eigen Vector:
//0.975610        1.000000        0.000000
//STEP-5:
//Eigen Value = 2.975610
//Eigen Vector:
//1.000000        0.991803        0.000000

