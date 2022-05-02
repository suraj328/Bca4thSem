//Write a program to approximate the functional value at any given x from given n no. of data using Newton's central divided difference interpolation
#include<stdio.h>
#include<conio.h>
 
void main()
{
    int x[10], y[10], p[10];
    int k,f,n,i,j=1,f1=1,f2=0;
    printf("\nEnter the number of observations:\n");
    scanf("%d", &n);
 
    printf("\nEnter the different values of x:\n");
    for (i=1;i<=n;i++)
        scanf("%d", &x[i]);
 
    printf("\nThe corresponding values of y are:\n");
    for (i=1;i<=n;i++)
        scanf("%d", &y[i]);
    f=y[1];
    printf("\nEnter the value of 'k' in f(k) you want to evaluate:\n");
    scanf("%d", &k);
    do
    {
        for (i=1;i<=n-1;i++)
        {
            p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
            y[i]=p[i];
        }
        f1=1;
        for(i=1;i<=j;i++)
            {
                f1*=(k-x[i]);
            }
        f2+=(y[1]*f1);
        n--;
        j++;
    }
    while(n!=1);
    f+=f2;
    printf("\nf(%d) = %d", k , f);
    getch();
}
//Ouput:
//Enter the number of observations:
//4
//Enter the different values of x:
//1
//3
//5
//6
//The corresponding values of y are:
//2
//5
//6
//7
//Enter the value of 'k' in f(k) you want to evaluate:
//4
//f(4) = 5

