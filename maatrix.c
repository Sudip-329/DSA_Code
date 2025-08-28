#include<stdio.h>
int main()
{
    int i_329, j_329, row_329, col_329;
    int a_329[30][30];

    printf("Enter the matrix size rows: \n");                 //Name : Sudip Chakrabarty
    scanf("%d", &row_329);                                    //Roll : 21053329
                                                              //Branch : CSE
    printf("Enter the matrix size columns: \n");
    scanf("%d", &col_329);

    printf("Enter the matrix elements for Matrix A: \n");
    for (i_329=0; i_329<row_329; i_329++)
    {
        for (j_329=0; j_329<col_329; j_329++)
        {
        printf("a[%d][%d]=", i_329, j_329);
        scanf("%d", &a_329[i_329][j_329]);
        }
    }
    printf("The entered matrix is: \n");
    for (i_329=0; i_329<row_329; i_329++)
    {
        printf("\t\t\t");
            for (j_329=0; j_329<col_329; j_329++)
        {
            printf("%d  ", a_329[i_329][j_329]);
        }
    printf("\n");
    }
    return 0;
}