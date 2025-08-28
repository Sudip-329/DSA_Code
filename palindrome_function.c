#include<stdio.h>
int palindrome(int x)
{
    int rem,sum=0,temp;
    temp=x;
    while (x!=0)
    {
        rem=x%10;
        sum=sum*10+rem;
        x=x/10;
    }
    if (sum==temp)
    {
        printf("The number is palindrome.");
    }
    else
    printf("The number is not a palindrome.");
    
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    palindrome(n);

    return 0;
}