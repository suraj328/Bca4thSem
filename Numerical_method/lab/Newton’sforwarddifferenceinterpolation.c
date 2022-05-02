//Write a program to approximate the functional value at any given x from given n no. of data using Newton's forward difference interpolation.

#include<stdio.h>
void main()
{
float x[20],fx[20][20],xvalue,h,p,temp,ans;
int n,i,j,fact;
printf("\n Enter the value of x to find f(x)...");
scanf("%f",&xvalue);
printf("\n Enter the number of observation you want to insert...");
scanf("%d",&n);

//Input observation table
for(i=0;i<n;i++)
{
printf("\n Enter the value of x...");
scanf("%f",&x[i]);
printf("\n Enter the value of f(x)...");
scanf("%f",&fx[i][0]);
}

//Calculate the value of p
h=x[1]-x[0];
p=(xvalue-x[0])/h;

//Calculate the value of ?xi , ?2xi , ?3xi , . . . (where i = 1, 2, 3, . . . )
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
fx[j][i]=fx[j+1][i-1]-fx[j][i-1];
}
}

//Print the value of ?xi , ?2xi , ?3xi , . . . table
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n-i;j++)
{
printf("%f ",fx[i][j]);
}
}

//Find f(x) using Newton's Forward Interpolation Method
ans=fx[0][0];
for(i=1;i<n;i++)
{

//Calculate p , p(p - 1) , p(p - 1)(p - 2) , . . .
temp=p;
for(j=1;j<i;j++)
{
temp=temp*(p-j);
}

//Factorial calculation
fact=1;
for(j=1;j<=i;j++)
{
fact=fact*j;
}
ans=ans+((temp/fact)*fx[0][i]);
}
printf("\n f(x) = %f",ans);
}
//Output:
//	Enter the value of x to find f(x)...25
// Enter the number of observation you want to insert...5
// Enter the value of x...10
// Enter the value of f(x)...0.1736
// Enter the value of x...20
// Enter the value of f(x)...0.3420
// Enter the value of x...30
// Enter the value of f(x)...0.5
// Enter the value of x...40
// Enter the value of f(x)...0.6428
// Enter the value of x...50
// Enter the value of f(x)...0.7660
//
//0.173600 0.168400 -0.010400 -0.004800 0.000400
//0.342000 0.158000 -0.015200 -0.004400
//0.500000 0.142800 -0.019600
//0.642800 0.123200
//0.766000
// f(x) = 0.422609

