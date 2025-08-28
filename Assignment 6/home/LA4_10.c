#include<stdio.h>
int main()
{
    int i,j,n;
    char ch;
    printf("How many rows you want :");                     //Name : Sudip Chakrabarty
    scanf("%d",&n);                                     //Roll : 21053329
                                                            //Branch : CSE
    for ( i = 1; i <=n; i++)                //Section : A10
    {    
        ch='A'+(i-1);
        for ( j =1; j <=i; j++)
        {
            printf("%c ",ch);
            ch = ch-1;
        }
        printf("\n");
    }
 return 0;   
}