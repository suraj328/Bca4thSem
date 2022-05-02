#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define   SIZE   10
#define F(x,y) 2*x*x*y*y


int main()
{
	 float a[SIZE][SIZE], b[SIZE], ratio;
	 int i,j,k,n=4,x,y;
	 a[1][1]=-4;a[1][2]=1;a[1][3]=1;a[1][4]=0;
	 a[2][1]=1;a[2][2]=-4;a[2][3]=0;a[2][4]=1;
	 a[3][1]=1;a[3][2]=0;a[3][3]=-4;a[3][4]=1;
	 a[4][1]=0;a[4][2]=1;a[4][3]=1;a[4][4]=-4;
	 
	 printf("enter value of x and y pos for 1st eq:");
	 scanf("%d %d",&x,&y);
	 a[1][5] = F(x,y); 
	 printf("enter  value of x and y pos for 2nd eq:");
	 scanf("%d %d",&x,&y);
	 a[2][5] = F(x,y); 
	 printf("enter value of x and y pos for 3rd eq:");
	 scanf("%d %d",&x,&y);
	 a[3][5] = F(x,y); 
	 printf("enter value of x and y pos for 4th eq:");
	 scanf("%d %d",&x,&y);
	 a[4][5] = F(x,y); 
	
	 
	
	 for(i=1;i<=n-1;i++)
	 {
		  if(a[i][i] == 0.0)
		  {
			   printf("Mathematical Error!");
			   exit(0);
		  }
		  for(j=i+1;j<=n;j++)
		  {
			   ratio = a[j][i]/a[i][i];
			   
			   for(k=1;k<=n+1;k++)
			   {
			  		a[j][k] = a[j][k] - ratio*a[i][k];
			   }
		  }
	 }
	 
	 b[n] = a[n][n+1]/a[n][n];
	
	 for(i=n-1;i>=1;i--)
	 {
		  b[i] = a[i][n+1];
		  for(j=i+1;j<=n;j++)
		  {
		  		b[i] = b[i] - a[i][j]*b[j];
		  }
		  b[i] = b[i]/a[i][i];
	 }
	
	 printf("\nSolution:\n");
	 for(i=1;i<=n;i++)
	 {
	  	printf("x[%d] = %0.3f\n",i, b[i]);
	 }
	 getch();
}
