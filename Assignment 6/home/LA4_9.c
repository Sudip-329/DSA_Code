#include<stdio.h>
int main()
{
    int num_329,temp_329,rem_329,sum=0;                          //Name : Sudip Chakrabarty
    printf("Enter any number : ");                   //Roll : 21053329
    scanf("%d",&num_329);                                //Section : A10
                                                     //Branch : CSE
    temp_329 = num_329;
    while(temp_329!=0)
    {
        rem_329 = temp_329%10;
        sum = sum + rem_329*rem_329*rem_329;
        temp_329=temp_329/10;
    }
    if(num_329 == sum)
    printf("Amgstrom number");
    else
    printf("Not an armstrong number");
    return 0;
}