
 #include<stdio.h>
  int main()
  {
   int raw,k,col,n;
   printf("How many row you want:");
    scanf("%d",&n);
    for(raw=1;raw<=n;++raw)
    {
      for(k=1;k<raw;k++)
         printf("   "); 
      for(col=1;col<=(n-raw+1);++col)
         printf(" %d ",col);
      for(col=n-raw;col>0;col--)
         printf(" %d ",col);
       printf("\n");
    }
 return 0;
 }