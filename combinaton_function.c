#include<stdio.h>
int factorial(int n)
{
    int i ,sum=1;
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}
int main()
{
    int n,r,result;
    //int r1,r2,r3;
    printf("Enter the of n and r(n>=r):");
    scanf("%d %d",&n,&r);

    // r1=factorial(n);
    // r2=factorial(n-r);
    // r3=factorial(r);
    // result=(double)r1/(r2*r3);

    result=((factorial(n))/((factorial(n-r))*factorial(r)));
    printf("The result = %d",result);
}