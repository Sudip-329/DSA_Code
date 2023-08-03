// #include<stdio.h>
// int sorting(int a[],int p)
// {
//     int i,j,temp;
//     for(i=0;i<p;i++)
//     {
//         for(j=i+1;j<p;j++)
//         {
//             if (a[i]>a[j])
//             {
//                 temp=a[j];
//                 a[j]=a[i];
//                 a[i]=temp;
//             }
//         }
//     }
// }
// int main()
// {
// int n,arr[50],arr1[50],ad[50],i,n1;
// printf("Enter the array1 size: ");
// scanf("%d",&n);
// printf("Enter the array1 elements :");
// for(i = 0; i < n; i++)
//     scanf("%d",&arr[i]);

// sorting(arr,n);


// printf("\nEnter the array2 size: ");
// scanf("%d",&n1);
// printf("Enter the array2 elements :");
// for(i = 0; i < n1; i++)
//     scanf("%d",&arr1[i]);

// sorting(arr1,n1);

// i=0;
// int j=0,k=0;
// while(i<n && j<n1)
// {
//     if(arr[i]<arr1[j]){
//         ad[k]=arr[i];
//         i++;
//         k++;
//     }else if(arr[i]>arr1[j]){
//         ad[k]=arr1[j];
//         j++;
//         k++;
//     }else{
//         ad[k]=arr[i];
//         i++;
//         j++;
//         k++;
//     }
// }
// while (i<n)
// {
//     ad[k]=arr[i]; 
//     i++; 
//     k++;
// }
// while (j<n1)
// {
//     ad[k]=arr1[j];
//     j++;
//     k++;
// }

// printf("After adding two array elements: ");
// for (i=0; i<k; i++)
//     printf("%d ",ad[i]);

// return 0;
// }
// //Name: Pappu Bishwas
// //Roll: 2106287
// //Branch:IT
// //Section:IT-2



#include<stdio.h>
int main()
{
    int a[3][2]={5,1,1,20,25,11};
    int i,j,m,n,o,p;
    i=++a[1][0];
    j=a[1][0]++;
    m=a[i++][1];
    n=++a[2][2];
    o=a[n--][i--];
    //p=a[3][7];
    printf("%d %d %d %d %d %d",i,j,m,n,o,p);
}

