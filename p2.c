#include<stdio.h>
int main()
{
    int i_329,j_329,n_329;
    printf("How many rows :");
    scanf("%d",&n_329);                                         //Name : Sudip Chakrabarty
       for ( i_329 = 1; i_329 <=n_329; i_329++)                 //Roll : 21053329
    {                                                           //Branch : CSE
        for ( j_329 =1; j_329 <= i_329; j_329++)                //Section : OA10
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