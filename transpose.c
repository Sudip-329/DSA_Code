//Lab_1(Transpose)
#include<stdio.h>
int main()
{
   int a[100][100],t[100][100],i,j,row,col;

   printf("Enter the no of rows and cols of the matrix : ");          
   scanf("%d %d",&row,&col);

   printf("Enter the values for a matrix :\n");                //Name : Sudip Chakrabarty
   for(i=0; i<row; i++)                            //Roll : 21053329
   {                                                               //Branch: CSE
       for(j=0; j<col; j++)
       {
           printf("a[%d][%d] = ",i,j);
           scanf("%d",&a[i][j]);
       }
   }

    printf("\nEntered Matrix\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    // doing transepose matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            t [j][i] = a[i][j];
        }
    }

    //printing the result
    printf("\nTransepose Matrix\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n"); 
    }

}