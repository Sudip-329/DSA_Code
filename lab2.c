//sum of ele,emts of array
#include<stdio.h>
int main()
{
    int a[50],sum=0,i,n;                           //Name : Sudip Chakrabarty
    float average;                                             //Roll : 21053329
    printf("Enter the value how many numbers you want: ");         //Branch : CSE
    scanf("%d",&n);                                            //Section : A10

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
    {
       sum=sum+a[i];
    }
    printf("Sum of the all value : %d",sum);
    average=(float)sum/n;
    printf("\nAverage of %d numbers = %0.3f",n,average);
return 0;
}