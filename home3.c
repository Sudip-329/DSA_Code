#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;                                       //Name : Sudip Chakrabarty
    float num[50];                                      //Roll : 21053329
    float sum = 0.0, mean, sd;
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    printf("Enter the value of elements: \n");
    for (i = 0; i < n; i++ )
    scanf("%f", &num[i]);
    for (i = 0; i < n; i++){
      sum += num[i];
    }
    mean = sum / n; 
    sum = 0.0;
    for (i = 0; i < n; i++){
       sum += (num[i] - mean) * (num[i] - mean);
    }
    sd = sqrt(sum / n);
    printf("Mean: %.3f \n", mean);
    printf("Standard Deviation: %.4f", sd);
    return 0;
}