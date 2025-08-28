#include<stdio.h>
int main()
  {
    int row_329,k_329,col_329,n_329;                  //Name : Sudip Chakrabarty
    printf("How many rows:");                         //Roll : 21053329
    scanf("%d",&n_329);
    for(row_329=1;row_329<=n_329;row_329++)
    {
        for(k_329=1;k_329<=n_329-row_329;k_329++)
        printf("   "); 
        for(col_329=1;col_329<=row_329;++col_329)
        printf(" %d ",col_329);
        for(col_329=row_329-1;col_329>0;col_329--)
        printf(" %d ",col_329);
        printf("\n");
    }
 return 0;
 }