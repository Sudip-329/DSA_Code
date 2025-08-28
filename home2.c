#include<stdio.h>
int main( )
{
   int i,j,n;                      //Name : Sudip Chakrabarty
   float median,a[50],t;               //Roll : 21053329
   printf("Enter the number of items:\n");
   scanf("%d", &n);

   printf("Input %d values :\n",n);
   for (i = 0; i < n ; i++)
   scanf("%f", &a[i]);

   for (i = 0 ; i < n; i++)
   {
      for (j =i+1 ; j < n ; j++) 
      {
         if (a[i] > a[j]) 
         {
            t = a[j];
            a[j] = a[i];
            a[i] = t;
         }
      }
   } 
   if ( n % 2 == 0)
      median = (a[(n/2) -1] + a[n/2])/2.0 ;
   else
      median = a[(n-1)/2];
   
   printf("The ascending order of numbers :  ");
   for (i = 0 ; i < n ; i++)
   printf("%.2f ", a[i]);
   printf("\n\nMedian is %.2f\n", median);

return 0;
}