//To cheeck palindrome or not.
#include<stdio.h>
int palindrome(int x_329)
{
    int temp_329 = x_329, rem_329,sum_329 = 0;
    while(x_329!=0)                                     //Name : Sudip Chakrabarty       Roll : 21053329
    {                                               //Branch : CSE
    rem_329 = x_329%10;
    sum_329 = sum_329*10 + rem_329;
    x_329 = x_329/10;
    }
    if(sum_329 == temp_329){
        printf("The number is palindrome.");}
    else
    printf("The number is not a palindrome number.");
}
int main()
{
    int n_329;
    printf("Enter a number : ");
    scanf("%d",&n_329);
    palindrome(n_329);
    return 0;
}