#include<stdio.h>
int main()
{                                                   //Name : Sudip Chakrabarty
    int a_329[5]={11,18,5,2,19},b_329[5];              //Roll : 21053329
    for (int i = 0; i <5; i++)
    {
        printf("a[%d] = %d\t",i,a_329[i]);
        b_329[i]=a_329[i];
        printf("b[%d] = %d\n",i,b_329[i]);
    }
return 0;
}