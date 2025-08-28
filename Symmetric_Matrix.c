// Home Assignment, Question-1(Symmetric)
#include<stdio.h>
int main()
{ 
 int i,j, n, c;
 int a[100][100], t[100][100], sum=0, count=0, y;
 
 printf("Enter the dimensions for a square matrix\n");
 printf("Enter the row/column value for matrix-1: ");                    //Name : Sudip Chakrabarty
 scanf("%d", &n);                                                    //Roll : 21053329
                                                                         //Branch : CSE
 //matrix-1
 printf("Enter the elements for Matrix-1 \n");
 printf("Matrix 1= \n");
 for(i=0;i<n;i++)
 {
     for (j=0; j<n; j++)
     {
        printf("a[%d][%d]= ", i, j);
        scanf("%d", &a[i][j]);
     }
 }

 // Presenting the entered matrix
 printf("Matrix 1= \n");
 for(i=0;i<n;i++)
 {
        printf("\t");
     for (j=0; j<n; j++)
     {
        printf("%d     ", a[i][j]);
     }
        printf("\n");
 }
 
 for (i=0; i<n; i++)
 {
   for(j=0; j<n; j++)
    {
       t[j][i]=a[i][j]; 
    }
  }

 printf("The transpose of matrix-1= \n");
 for (i=0; i<n; i++)
 {
   printf("\t"); 
   for(j=0; j<n; j++)
    {
        printf("%d     ", t[i][j]); 
    }
   printf("\n"); 
  }
  
 for (i=0; i<n; i++)
 { 
   for(j=0; j<n; j++)
    {
        if (t[i][j]==a[i][j])
        {
            y=++count;
        } 
    }
   printf("\n"); 
  }
 if (y==n*n)
 {
    printf("The matrix is symmetric");
 }
 else
    printf("The matrix is not symmetric");

return 0;
}