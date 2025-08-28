#include<stdio.h>
int main()
{
    int i,j,n;
    printf("How many rows :");                              //Name : Sudip Chakrabarty
    scanf("%d",&n);                                     //Roll : 21053329
    for ( i = 1; i <=n; i++)                //Section : A10
    {                                                       //Branch : CSE
        for ( j =1; j <= i; j++)
        {
           if (i%2!=0)
           {
               printf("%d  ",j);
           }
           else
           printf("%d  ",(i-j+1));
        }
        printf("\n");
    }
    return 0;
}