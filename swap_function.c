#include<stdio.h>
void swap(int x, int y)
{
    int temp;

    temp=x;
    x=y;
    y=temp;

    printf("After swapping num1=%d, num2=%d", x, y);
}
int main()
{
    int num1, num2;

    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    
    printf("Before Swapping num1=%d, num2=%d\n", num1, num2);
    swap(num1, num2);

    return 0;
}   
