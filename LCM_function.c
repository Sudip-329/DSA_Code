#include<stdio.h>
int LCM(int a, int b)
{
    int i,lcm,gcd;
    for ( i = 1; i <= b && i<=a; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    printf("This is the lcm = %d",lcm);    
}
int main()
{
    int num1,num2;
    printf("Enter the two numbers :  ");
    scanf("%d %d",&num1,&num2);
    LCM(num1,num2);

    return 0;
}