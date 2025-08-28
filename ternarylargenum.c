#include<stdio.h>
#include<math.h>
int main()
{
int a329,b329,c329;
printf("Enter two number:");
scanf("%d %d",&a329,&b329);
c329=a329>b329?a329:b329>a329?b329:-1;
if(c329==-1)
printf("Both are equal.");
else
printf("Lager number %d",c329);

return 0;
}