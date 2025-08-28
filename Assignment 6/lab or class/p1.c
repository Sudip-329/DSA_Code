#include<stdio.h>
int main()                               //Name : Sudip Chakrabarty
{                                        //Roll : 21053329
    double i_329,n_329;                 
    double sum=0;
    printf("This is a program to print the sum of the series 1 + 3^2/3^3 + 5^2/5^3 + 6^2/6^3 +.... \n");
    printf("Enter range : ");
    scanf("%lf",&n_329);
    for(i_329=1; i_329<=n_329; i_329=i_329+2)
    {
        sum = sum+ ((i_329*i_329)/(i_329*i_329*i_329));
    }
    printf("Sum of the series 1 + 3^2/3^3 + 5^2/5^3 + 6^2/6^3 +....= %.2lf",sum);
    return 0;
}