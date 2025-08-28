#include<stdio.h>
int main()
{
    int i_329,j_329,n_329;
    char ch_329;
    printf("How many rows you want :");                     //Name : Sudip Chakrabarty
    scanf("%d",&n_329);                                     //Roll : 21053329
                                                            //Branch : CSE
    for ( i_329 = 1; i_329 <=n_329; i_329++)                //Section : A10
    {    
        ch_329='A'+(i_329-1);
        for ( j_329 =1; j_329 <=i_329; j_329++)
        {
            printf("%c ",ch_329);
            ch_329=ch_329-1;
        }
        printf("\n");
    }
 return 0;   
}