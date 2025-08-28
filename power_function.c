#include<stdio.h>
    void calculatePower(double a, double b)
    {
        double result=1, i;
        for(i=1; i<=b; i++)
        {
            result= result*a;
        }
    printf("The power of %.2lf to the power %.2lf is= %.2lf\n", a, b, result);    
    }
int main()
{
    double base,exp;
    
    printf("Enter base: \n");
    scanf("%lf", &base);  //result=pow(base, exp);

    printf("Enter exponant: \n");
    scanf("%lf", &exp);
    
    calculatePower(base, exp);

    return 0;
}
    