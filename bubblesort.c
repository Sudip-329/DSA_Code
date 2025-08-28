#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[30], n, i, j, temp;
    printf("How many numbers: ");
    scanf("%d", &n);                 //Name : Sudip Chakrabarty
                                         //Roll : 21053329
    if (n>30)                        //Branch : CSE
    {
        printf("Too many numbers: \n");
    }

    printf("Enter the array elements: \n");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    for (i=0; i<n-1; i++)
    {
        
        for (j=0; j<(n-i)-1; j++)
        if (a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    printf("The numbers sorted in Assending order: \n");
    for (i=0; i<n; i++)
        printf("\n %d", a[i]);
    return 0;
}