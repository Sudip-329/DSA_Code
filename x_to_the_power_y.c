//Power Function.
#include<stdio.h>
int POWER(double a_329, double b_329)
{
    double result_329=1,i_329;                         //Name : Sudip Chakrabarty       Roll : 21053329
    for(i_329=1; i_329<=b_329; i_329++)                //Branch : CSE
    {
        result_329 = result_329*a_329;
    }
    printf("The result of %.2lf ^ %.2lf is = %.2lf",a_329,b_329,result_329);
}
int main()
{
    int x_329,y_329;
    printf("Enter base : ");
    scanf("%d",&x_329);

    printf("Enter exponential : ");
    scanf("%d",&y_329);

    POWER(x_329,y_329);
}
