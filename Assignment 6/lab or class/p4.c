#include<stdio.h>
int main()
{
    int i_329,j_329,n_329;                          //Name : Sudip Chakrabarty
    printf("How many rows :");                      //Roll : 21053329
    scanf("%d",&n_329);
    for ( i_329 = 1; i_329 <=n_329; i_329++)
    {    
        for ( j_329 =1; j_329 <= i_329; j_329++)
        {
           if (i_329%2!=0)
           {
               printf("%d  ",j_329);
           }
           else
           printf("%d  ",(i_329-j_329+1));
        }
        printf("\n");
    }
    return 0;
}