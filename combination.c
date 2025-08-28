//To see n^ c r.
#include<stdio.h>
int factorial(int n_329)
{
    int sum=1,i_329;                         //Name : Sudip Chakrabarty       Roll : 21053329
    for(i_329=1; i_329<=n_329; i_329++)      //Branch : CSE
    {
        sum = sum*i_329;
    }
    return sum;
}

int main()
{
    int n_329,r_329,result_329;
    printf("Enter values for n and r(n>=r) : ");
    scanf("%d %d",&n_329,&r_329);

    result_329 = ((factorial(n_329))/((factorial(n_329-r_329))*factorial(r_329)));
    printf("Result = %d",result_329);
}