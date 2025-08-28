//Lab-3(sum of diagonal elements)
#include<stdio.h>
int main()
{
    int a[20][20],i,j,r,c,sum;        //Name : Sudip Chakrabarty
    printf("How many row and column want : ");                //Roll : 21053329
    scanf("%d  %d",&r,&c);                            //Branch: CSE
    printf("Give data : ");
    for (i = 0; i <r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Eneter the a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("THis is the matrix : \n");
    for (i = 0; i <r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i <r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(i==j)
            sum=sum+a[i][j];
        }
    }
    printf("Sum of diagonaol elements: %d",sum);    

    return 0;
}