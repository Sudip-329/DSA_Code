//To swap two numbers.
#include<stdio.h>
int SWAP(int x_329, int y_329)
{
    int temp_329;                        //Name : Sudip Chakrabarty       Roll : 21053329
    temp_329 = x_329;                    //Branch : CSE
    x_329=y_329;
    y_329=temp_329;
    printf("After swapping  Num1 =%d and Num2 =%d",x_329,y_329);
}

int main()
{
    int a_329,b_329;
    printf("Enter values for Num1 :\n");
    scanf("%d",&a_329);

    printf("Enter values for Num2 :\n");
    scanf("%d",&b_329);
    printf("Before Swapping Num1=%d, Num2=%d\n", a_329,b_329);
    SWAP(a_329,b_329);
}