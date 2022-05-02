//Write a program to find a solution of linear algebraic equations using Gauss Jordan method.
//Algorithm:
//1.	Start
//2.	Read number of unknowns : n
//3.	Read Augmented Matrix (A) of by n+1 size
//4.	Transform Augmented Matrix (A) to diagonal Matrix by Row Operations.
//5.	Obtain solution by making all diagonal elements to 1.
//6.	Display result.
//7.	Stop

#include<stdio.h>
int main()
{
    int i,j,k,n;
    float A[20][20],c,x[10];
    printf("\nEnter the size of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf(" A[%d][%d]:", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    /* Now finding the elements of diagonal matrix */
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i!=j)
            {
                c=A[i][j]/A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    printf("\nThe solution is:\n");
    for(i=1; i<=n; i++)
    {
        x[i]=A[i][n+1]/A[i][i];
        printf("\n x%d=%f\n",i,x[i]);
    }
    return(0);
}
//Output
//Enter the size of matrix: 3
//Enter the elements of augmented matrix row-wise:
// A[1][1]:10
// A[1][2]:-7
// A[1][3]:5
// A[1][4]:9
// A[2][1]:3
// A[2][2]:6
// A[2][3]:0
// A[2][4]:-9
// A[3][1]:9
// A[3][2]:3
// A[3][3]:-2
// A[3][4]:-1
//The solution is:
// x1=0.224806
// x2=-1.612403
// x3=-0.906976

