#include<stdio.h>
int main()
{
    int num_329,rem_329,sum=0;
    printf("Enter any number to see it's reverse : ");       //Name : Sudip Chakrabarty
    scanf("%d",&num_329);                                    //Roll : 21053329
                                                             //Section : A10
    while(num_329!=0)                                        //Branch : CSE
    {
        rem_329 = num_329%10;
        sum = sum*10+rem_329;
        num_329 = num_329/10;
    }
    printf("Reverse of the number is : %d\n",sum);
}