#include<stdio.h>
#include<math.h>
int main()
{
int n_,rev_,d_,r_,t_;
printf("Enter the value of integer:");
scanf("%d",&n_);
t_=n_;
rev_=0;
r_=0;
while(n_>0)
{
d_=n_%2;
rev_=(d_*pow(10,r_))+rev_;
n_=n_/2; 
r_++;
}
printf("The binary numbers of %d is = %d\n",t_,rev_);
return 0;
}