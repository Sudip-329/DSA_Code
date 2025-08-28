#include <stdio.h>
int main()
{
  int row,col,n;                                  //Name : Sudip Chakrabarty
  printf("Enter range:");                                     //Roll : 21053329
  scanf("%d",&n);                                         //Section : A10
  for(row=1;row<=n;++row)                     //Branch : CSE
  {
     
    for(col=1;col<=row;++col)
    printf("%d ",(row-col)%2);
    printf("\n");
  }
  return 0;
}