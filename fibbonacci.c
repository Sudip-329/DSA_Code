#include<stdio.h>
int fibbonacci(int n)
{
int t1=0, t2=1,nextTerm = 0,i=1;
printf("The %d terms series of fibbonancci : ",n);
while(i<=n){
    printf(" %d ",t1);
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
    i++;
}
}
int main()
{
    int n;
    printf("Enter the value how many numbers you want  : ");
    scanf("%d",&n);
    fibbonacci(n);
return 0;    
}
