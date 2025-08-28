// Home Assignemnt, Question-2(Orthogonal)
#include<stdio.h>
int main()
{ 
 int i,j, n, c;
 int a[100][100],t[100][100],sum=0,count=0,y,k,mul[100][100], l[100][100];
 
 printf("Enter the dimensions for a square matrix\n");               //Name : Sudip Chakrabarty
 printf("Enter the row/column value for matrix-1: ");                //Roll : 21053329
 scanf("%d", &n);                                                //Branch : CSE

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

 // presenting the entered matrix
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
       printf("%d    ", t[i][j]); 
    }
   printf("\n");  
 }

 for(i=0;i<n;i++)
 {
     for (j=0; j<n; j++)
     {
        mul[i][j]=0;
        {
            for (k=0; k<n; k++)
            {
                mul[i][j]=mul[i][j]+a[i][k]*t[k][j];
            }
        }
     }
 }
 
 printf("The multiplication of matrix-1 and its transpose= \n");
 for (i=0; i<n; i++)
 {
   printf("\t");
   for(j=0; j<n; j++)
    {
       printf("%d     ", mul[i][j]); 
    }
   printf("\n");  
 }

 // creating a identity matrix
 for(i=0;i<n;i++)
 {
     for (j=0; j<n; j++)
     {
        if (i==j)
        {
            l[i][j]=1;
        }
        else
        {
            l[i][j]=0;
        }
     }
 }
 
 printf("The Identity matrix= \n");
 for (i=0; i<n; i++)
 {
   printf("\t");
   for(j=0; j<n; j++)
    {
       printf("%d     ", l[i][j]); 
    }
   printf("\n");  
 }

 for(i=0;i<n;i++)
 {
     for (j=0; j<n; j++)
     {
        if (mul[i][j]==l[i][j])
        {
            y=++count;
        }
     }
 }
 
 if (y==n*n)
 {
     printf("The the matrix-1 is orthogonal");
 }
 else
     printf("The matrix is not orthogonal");

return 0;
}